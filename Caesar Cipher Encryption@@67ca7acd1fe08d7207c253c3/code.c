#include <stdio.h>
#include <ctype.h>

// Function declaration
void caesarCipher(char message[], int shift, char encrypted[]);

int main() {
    char message[100];
    int shift;
    char encrypted[100];

    // Input message
    scanf(" %[^\n]", message);

    // Input shift value
    scanf("%d", &shift);

    // Normalize shift
    shift = shift % 26;
    if (shift < 0)
        shift += 26;

    // Encrypt
    caesarCipher(message, shift, encrypted);

    // Output encrypted message
    printf("%s\n", encrypted);

    return 0;
}

// Function definition
void caesarCipher(char message[], int shift, char encrypted[]) {
    int i = 0;
    while (message[i] != '\0') {
        if (isalpha(message[i])) {
            char base = isupper(message[i]) ? 'A' : 'a';
            encrypted[i] = (message[i] - base + shift) % 26 + base;
        } else {
            encrypted[i] = message[i];
        }
        i++;
    }
    encrypted[i] = '\0';
}
