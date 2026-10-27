#include <stdio.h>

int main() {
    int n;

    printf("Enter how many terms (up to 5): ");
    scanf("%d", &n);

    if (n == 1) {
        printf("0\n");
    }
    else if (n == 2) {
        printf("0 1\n");
    }
    else if (n == 3) {
        printf("0 1 1\n");
    }
    else if (n == 4) {
        printf("0 1 1 2\n");
    }
    else if (n == 5) {
        printf("0 1 1 2 3\n");
    }
    else {
        printf("This program only handles up to 5 terms.\n");
    }

    return 0;
}
