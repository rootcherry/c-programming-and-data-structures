#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a num(integer): ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Zero\n");
    }
    else
    {
        if (n > 0)
        {
            printf("Positive\n");
        }
        else
        {
            printf("Negative\n");
        }

        if (n % 2 == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
    }

    return 0;
}
