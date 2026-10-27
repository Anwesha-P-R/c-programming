#include <stdio.h>

int main() {
    int n, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        fact = 1;
    }
    else if (n == 1) {
        fact = 1;
    }
    else if (n == 2) {
        fact = 2;
    }
    else if (n == 3) {
        fact = 6;
    }
    else if (n == 4) {
        fact = 24;
    }
    else if (n == 5) {
        fact = 120;
    }
    else {
        printf("This program only handles numbers up to 5.\n");
        return 0;
    }

    printf("Factorial = %d\n", fact);

    return 0;
}
