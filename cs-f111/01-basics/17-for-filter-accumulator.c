#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUT_SIZE 128

static int read_line(char buffer[], size_t size);
static int read_positive_integer(int *number);
static int ask_continue(void);

int main(void)
{
    int number;
    long long sum;
    long long i;

    do
    {
        if (!read_positive_integer(&number))
        {
            printf("\nInput ended. Exiting program.\n");
            return 0;
        }

        sum = 0;

        for (i = 1; i <= number; i++)
        {
            if (i % 3 == 0)
            {
                sum += i;
            }
        }

        printf("Sum: %lld\n", sum);

    } while (ask_continue());

    printf("Program finished.\n");

    return 0;
}

static int read_line(char buffer[], size_t size)
{
    int ch;

    if (fgets(buffer, (int)size, stdin) == NULL)
    {
        return 0;
    }

    if (strchr(buffer, '\n') != NULL)
    {
        return 1;
    }

    ch = getchar();

    if (ch == EOF || ch == '\n')
    {
        return 1;
    }

    while (ch != '\n' && ch != EOF)
    {
        ch = getchar();
    }

    return -1;
}

static int read_positive_integer(int *number)
{
    char buffer[INPUT_SIZE];
    char *end;
    long value;
    int status;

    for (;;)
    {
        printf("Enter a positive integer: ");
        status = read_line(buffer, sizeof buffer);

        if (status == 0)
        {
            return 0;
        }

        if (status < 0)
        {
            printf("Input is too long. Try again.\n");
            continue;
        }

        errno = 0;
        value = strtol(buffer, &end, 10);

        if (end == buffer)
        {
            printf("Invalid input. Enter an integer.\n");
            continue;
        }

        while (isspace((unsigned char)*end))
        {
            end++;
        }

        if (*end != '\0')
        {
            printf("Invalid input. Enter an integer only.\n");
            continue;
        }

        if (errno == ERANGE || value < INT_MIN || value > INT_MAX)
        {
            printf("Integer is outside the supported range.\n");
            continue;
        }

        if (value < 1)
        {
            printf("The number must be positive.\n");
            continue;
        }

        *number = (int)value;
        return 1;
    }
}

static int ask_continue(void)
{
    char buffer[INPUT_SIZE];
    char *cursor;
    int status;
    int choice;

    for (;;)
    {
        printf("Do you want to continue? (Y/N): ");
        status = read_line(buffer, sizeof buffer);

        if (status == 0)
        {
            return 0;
        }

        if (status < 0)
        {
            printf("Input is too long. Enter Y or N.\n");
            continue;
        }

        cursor = buffer;

        while (isspace((unsigned char)*cursor))
        {
            cursor++;
        }

        choice = toupper((unsigned char)*cursor);

        if (choice != 'Y' && choice != 'N')
        {
            printf("Invalid response. Enter Y or N.\n");
            continue;
        }

        cursor++;

        while (isspace((unsigned char)*cursor))
        {
            cursor++;
        }

        if (*cursor != '\0')
        {
            printf("Enter Y or N only.\n");
            continue;
        }

        return choice == 'Y';
    }
}
