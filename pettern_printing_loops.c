#include <stdio.h>

int main()
{
    int ch, i, j;

    printf("MENU\n");
    printf("1. Pattern A\n");
    printf("2. Pattern B\n");
    printf("3. Pattern C\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            for(i = 1; i <= 5; i++)
            {
                for(j = 1; j <= i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 2:
            for(i = 1; i <= 5; i++)
            {
                for(j = 1; j <= i; j++)
                {
                    printf("%d ", j);
                }
                printf("\n");
            }
            break;

        case 3:
            for(i = 1; i <= 4; i++)
            {
                for(j = 1; j <= 4 - i; j++)
                {
                    printf(" ");
                }

                for(j = 1; j <= (2 * i - 1); j++)
                {
                    printf("*");
                }

                printf("\n");
            }
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
