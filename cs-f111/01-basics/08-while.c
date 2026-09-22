#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: \n");
    scanf("%d", &number);

    while (number != 0)
    {
        if (number > 0)
        {
            printf("Positive\n\n");
        }
        else
        {
            printf("Negative\n\n");
        }
        scanf("%d", &number);
    }
    return 0;
}
