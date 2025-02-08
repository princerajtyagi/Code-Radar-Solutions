#include <stdio.h>

int main() {
    int num1, num2, result;

    // Take two integers as input
    scanf("%d %d", &num1, &num2);

    // Perform bitwise AND operation
    result = num1 & num2;

    // Print the result
    printf("%d\n", result);

    return 0;
}
