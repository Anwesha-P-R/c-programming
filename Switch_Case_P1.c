#include <stdio.h>
int main()
{
    int ch;
    printf("Enter a number from 1 to 7:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Today is Monday and we all hate it!");
        break;
    case 2:
        printf("Today is Tuesday and we all have to survive it!");
        break;
    case 3:
        printf("Today is Wednesday and we all have to have hopes on  it!");
        break;
    case 4:
        printf("Today is Thursday and we all have to be happy about  it!");
        break;
    case 5:
        printf("Today is Friday and we all have to be exited about it!");
        break;
    case 6:
        printf("Today is Saturday and we all have to party because of  it!");
        break;
    case 7:
        printf("Today is Sunday and we all have to be worried because its Monday after it!");
        break;
    default:
        printf("There are only 7 days in a week!");
    }
}
