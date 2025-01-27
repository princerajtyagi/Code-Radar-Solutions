#include <stdio.h>

int main() {
    float number; 
    printf("Enter a number");
    scanf("%f", &number);

    printf("You entered: %.2f\n", number);

    return 0;
}