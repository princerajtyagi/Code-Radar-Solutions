// Your code here...#include <stdio.h>

void caesarCipherEncrypt(char *message, int shift) {
    int i = 0;
    char ch;

    while (message[i] != '\0') {
        ch = message[i];

        // Encrypt uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A' + shift) % 26) + 'A';
            message[i] = ch;
        }
        // Encrypt lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a' + shift) % 26) + 'a';
            message[i] = ch;
        }
        // Leave other characters unchanged
        i++;
    }
}

int main() {
    char message[100];
    int shift;

    printf("Enter a message to encrypt: ");
    fgets(message, sizeof(message), stdin);

    printf("Enter shift amount: ");
    scanf("%d", &shift);

    caesarCipherEncrypt(message, shift);

    printf("Encrypted message: %s", message);

    return 0;
}
