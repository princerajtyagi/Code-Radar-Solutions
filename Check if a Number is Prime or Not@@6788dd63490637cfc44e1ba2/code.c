#include <stdio.h>

int main() {
    int num, is_prime = 1;

    scanf("%d", &num);

    if (num == 1) {
        printf("Not Prime\n");
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
