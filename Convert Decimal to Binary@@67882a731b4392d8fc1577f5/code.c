#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int found = 0; 
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            found = 1;
        }
        if (found) {
            printf("%d", (num >> i) & 1);
        }
    }
    if (!found) printf("0");
    return 0;
}
