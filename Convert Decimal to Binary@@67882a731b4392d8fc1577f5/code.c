#include <stdio.h>

void printBinary(int num) {
    int mask = 1 << 31; // Start from the leftmost (MSB) bit
    int foundOne = 0; // To skip leading zeros

    for (int i = 0; i < 32; i++) {
        if (num & mask) { // Check if current bit is 1
            foundOne = 1;
            printf("1");
        } else if (foundOne) { // Only print 0s after first 1
            printf("0");
        }
        mask >>= 1; // Move mask to next bit
    }

    if (!foundOne) printf("0"); // If num == 0, print "0"
}

int main() {
    int num;
    scanf("%d", &num);
    printBinary(num);
    return 0;
}
