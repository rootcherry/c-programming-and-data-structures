#include <stdio.h>

int main(void)
{
    int number;
    int lastDigit;
    int originalNumber;
    int reversedNumber = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (number < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    originalNumber = number;

    while (number != 0)
    {
        lastDigit = number % 10;
        number /= 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
    }

    if (originalNumber == reversedNumber)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not a palindrome\n");
    }

    return 0;
}
