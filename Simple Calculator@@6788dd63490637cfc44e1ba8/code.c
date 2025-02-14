#include <stdio.h>

int main() {
    double num1, num2;
    char op;

    scanf("%d %d %c", &num1, &num2, &op);

    // Performing the operation
    if (op == '+')
        printf("%d", num1 + num2);
    else if (op == '-')
        printf("%d", num1 - num2);
    else if (op == '*')
        printf("%d", num1 * num2);
    else if (op == '/') {
        if (num2 != 0)
            printf("Result: %.2lf\n", num1 / num2);
        else
            printf("Error! Division by zero.\n");
    } else
        printf("Invalid operator!\n");

    return 0;
}