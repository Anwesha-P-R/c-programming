#include <stdio.h>
int main()
{ int ch;
    printf("Enter a number from 1 to 7:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    printf("Weekday");
    break;
    case 6:
    case 7:
    printf("Weekend");
    default:
            printf("There are only 7 days in a week!");
    }
}
