#include <stdio.h>
#include <ctype.h>

// Function declaration
void caesarCipher(char message[], int shift, char encrypted[]);

// Main function
int main() {
    char message[100];
    int shift;
    char encrypted[100];

    printf("Enter the message: ");
    fgets(message, sizeof(message), stdin); // safer input

    printf("Enter the shift: ");
    scanf("%d", &shift);

    // Normalize shift
    shift = shift % 26;
    if (shift < 0)
        shift += 26;

    caesarCipher(message, shift, encrypted);

    printf("Encrypted message: %s", encrypted);

    return 0;
}

// Caesar cipher implementation
void caesarCipher(char message[], int shift, char encrypted[]) {
    int i = 0;
    while (message[i] != '\0') {
        char ch = message[i];

        if (ch >= 'A' && ch <= 'Z') {
            encrypted[i] = (ch - 'A' + shift) % 26 + 'A';
        } else if (ch >= 'a' && ch <= 'z') {
            encrypted[i] = (ch - 'a' + shift) % 26 + 'a';
        } else {
            encrypted[i] = ch; // non-alphabet characters unchanged
        }

        i++;
    }
    encrypted[i] = '\0'; // null-terminate the string
}
