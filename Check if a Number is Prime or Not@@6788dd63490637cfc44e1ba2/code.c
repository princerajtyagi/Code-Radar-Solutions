#include <stdio.h>

int main() {
    int num, i;
    scanf("%d", &num);

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("Not Prime\n");
            return 0;
        }
    }
    printf("Prime\n");
    return 0;
}
