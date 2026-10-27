#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number (up to 4 digits): ");
    scanf("%d", &n);
    int digits = 0;
    if (n >= 0 && n <= 9) digits = 1;
    else if (n >= 10 && n <= 99) digits = 2;
    else if (n >= 100 && n <= 999) digits = 3;
    else if (n >= 1000 && n <= 9999) digits = 4;

    switch (digits) {
        case 1: {
            sum = n;
            break;
        }
        case 2: {
            int d1 = n / 10;
            int d2 = n % 10;
            sum = d1 + d2;
            break;
        }
        case 3: {
            int d1 = n / 100;
            int d2 = (n / 10) % 10;
            int d3 = n % 10;
            sum = d1 + d2 + d3;
            break;
        }
        case 4: {
            int d1 = n / 1000;
            int d2 = (n / 100) % 10;
            int d3 = (n / 10) % 10;
            int d4 = n % 10;
            sum = d1 + d2 + d3 + d4;
            break;
        }
        default:
            printf("Number too large (max 4 digits).\n");
            return 0;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
