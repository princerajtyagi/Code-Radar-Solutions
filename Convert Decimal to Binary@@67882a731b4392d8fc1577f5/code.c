#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int found = 0; // To skip leading zeros
    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            found = 1; // Start printing after the first '1'
        }
        if (found) {
            printf("%d", (num >> i) & 1);
        }
    }

    if (!found) printf("0"); // If num is 0, print "0"

    return 0;
}
