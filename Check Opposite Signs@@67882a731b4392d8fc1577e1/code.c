#include <stdio.h>

int main() {
    int num1, num2;

    // Take two numbers as input
    scanf("%d %d", &num1, &num2);

    // Check if one number is positive and the other is negative
    if ((num1 > 0 && num2 < 0) || (num1 < 0 && num2 > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
