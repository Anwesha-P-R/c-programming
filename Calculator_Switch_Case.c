#include <stdio.h>
int main() {
    int choice;
    int num1, num2, result;
    printf("--- Basic Calculator Menu ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please run the program again.\n");
    }
    return 0;
}
