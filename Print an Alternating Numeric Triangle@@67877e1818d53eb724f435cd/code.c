#include <stdio.h>
int main() {
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        int num = i % 2; 
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num;
        }
        printf("\n");
    }

    return 0;
}
