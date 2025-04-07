#include <stdio.h>
#include <ctype.h>

// Caesar cipher function declaration
void caesarCipher(char message[], int shift, char encrypted[]);

// Only one main function!
int main() {
    char message[100];
    int shift;
    char encrypted[100];

    // Read the message
    scanf(" %[^\n]", message);  // Note: space before %[^\n] helps skip leftover newline

    // Read the shift value
    scanf("%d", &shift);

    // Normalize shift
    shift = shift % 26;
    if (shift < 0)
        shift += 26;

    // Encrypt the message
    caesarCipher(message, shift, encrypted);

    // Print the encrypted message
    printf("%s\n", encrypted);

    return 0;
}

// Function definition
void caesarCipher(char message[], int shift, char encrypted[]) {
    int i = 0;
    while (message[i] != '\0') {
        char ch = message[i];

        if (ch >= 'A' && ch <= 'Z') {
            encrypted[i] = (ch - 'A' + shift) % 26 + 'A';
        } else if (ch >= 'a' && ch <= 'z') {
            encrypted[i] = (ch - 'a' + shift) % 26 + 'a';
        } else {
            encrypted[i] = ch;
        }

        i++;
    }
    encrypted[i] = '\0'; // end the string properly
}
