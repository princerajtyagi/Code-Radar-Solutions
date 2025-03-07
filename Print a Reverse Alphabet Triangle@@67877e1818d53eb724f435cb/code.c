#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) {
        for (char ch = 'A'; ch < 'A' + i; ch++)
            printf("%c ", ch);
        printf("\n");
    }

    return 0;
}
