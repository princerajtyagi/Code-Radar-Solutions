#include <stdio.h>
int main() {
    int n, i, j, x;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {  
        for (x = 1; x <= n - i; x++) {  
            printf(" ");
        }
        for (j = 1; j <= i; j++) {  
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
