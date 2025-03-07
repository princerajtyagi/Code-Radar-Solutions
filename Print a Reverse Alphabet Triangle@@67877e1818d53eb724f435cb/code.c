#include <stdio.h>
int main() {
    int rows;
    scanf("%d", &rows);
    for (int i = rows; i >= 1; i--) {
        for (char ch = 'a' + i - 1; ch >= 'a'; ch--)
            printf("%c ", ch);
        printf("\n");
    }
    return 0;
}
