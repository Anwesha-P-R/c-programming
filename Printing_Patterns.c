#include <stdio.h>

int main() {
    int choice;

    printf("Choose a pattern:\n");
    printf("1. Star Triangle\n");
    printf("2. Number Triangle\n");
    printf("3. Pyramid\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("*\n");
            printf("**\n");
            printf("***\n");
            printf("****\n");
            printf("*****\n");
            break;

        case 2:
            printf("1\n");
            printf("1 2\n");
            printf("1 2 3\n");
            printf("1 2 3 4\n");
            printf("1 2 3 4 5\n");
            break;

        case 3:
            printf("    *\n");
            printf("   ***\n");
            printf("  *****\n");
            printf(" *******\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
