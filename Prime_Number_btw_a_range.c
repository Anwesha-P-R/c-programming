#include <stdio.h>

int main() {
    int start, end;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);
    if (start>=0 && end <21)
    {
        if(start <= 2 && end >= 2){printf("2 ");}
        if(start <= 3 && end >= 3){printf("3 ");}
        if(start <= 5 && end >= 5){printf("5 ");}
        if(start <= 7 && end >= 7){printf("7 ");}
        if(start <= 11 && end >= 11){printf("11 ");}
        if(start <= 13 && end >= 13){printf("13 ");}
        if(start <= 17 && end >= 17){printf("17 ");}
        if(start <= 19 && end >= 19){printf("19 ");}
    }
    else {
        printf("Range can be only from 0 to 20");}
    return 0;
}
