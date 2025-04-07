#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function declaration
void caesarCipher(char message[], int shift, char encrypted[]);

int main() {
    char message[100];
    int shift;
    char encrypted[100]; // to store the encrypted message

    // Read the input message
    scanf(" %[^\n]", message); // Read entire line including spaces

    // Read the shift value
    scanf("%d", &shift);

    // Normalize the shift to the range [0, 25]
    shift = shift % 26;
    if (shift < 0)
        shift += 26;

    // Call the caesarCipher function
    caesarCipher(message, shift, encrypted);

    // Output the encrypted message
    printf("%s\n", encrypted);

    return 0;
}

// Define the caesarCipher function
void caesarCipher(char message[], int shift, char encrypted[]) {
    int i = 0;
    while (message[i] != '\0') {
        if (isalpha(message[i])) {
            char base = isupper(message[i]) ? 'A' : 'a';
            encrypted[i] = (message[i] - base + shift) % 26 + base;
        } else {
            encrypted[i] = message[i]; // leave non-alphabet characters unchanged
        }
        i++;
    }
    encrypted[i] = '\0'; // null-terminate the encrypted string
}
