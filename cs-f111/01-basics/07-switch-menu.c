#include <stdio.h>

int main(void)
{
    int option;

    printf("1 - Start\n");
    printf("2 - Settings\n");
    printf("3 - Help\n");
    printf("4 - Exit\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Start selected\n");
        break;

    case 2:
        printf("Settings selected\n");
        break;

    case 3:
        printf("Help selected\n");
        break;

    case 4:
        printf("Exiting\n");
        break;

    default:
        printf("Invalid option\n");
        break;
    }

    return 0;
}
