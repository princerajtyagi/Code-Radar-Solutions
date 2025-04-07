#include <stdio.h>

int main() {
    char message[100];
    int shift, i;

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);

    printf("Enter shift: ");
    scanf("%d", &shift);

    i = 0;
    while (message[i] != '\0') {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = (message[i] - 'A' + shift) % 26 + 'A';
        } else if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] = (message[i] - 'a' + shift) % 26 + 'a';
        }
        i++;
    }

    printf("Encrypted message: %s", message);
    return 0;
}
