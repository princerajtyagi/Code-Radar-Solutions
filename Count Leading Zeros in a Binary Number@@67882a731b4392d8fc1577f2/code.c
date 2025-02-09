#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    if (num == 0) {
        printf("32");
        return 0;
    }

    while ((num & (1 << 31)) == 0) {
        num = num << 1;
        count++;
    }

    printf("%d", count);
    return 0;
}
