#include <stdio.h>

#include <string.h>

#include <ctype.h>

int main() {

char message [100];

int shift;

char encrypted[100]; // store

the encrypted message

// Read the input message scanf("%[^\n]s", message); //

Read entire line including spaces

// Read the shift value

scanf("%d", &shift);

// Normalize the shift to the range [0, 25]

shift = shift % 26;

if (shift < 0) shift += 26;

// Handle negative shifts

// call the caesarCipher function (to be implemented by the student)

caesarCipher (message, shift, encrypted);
// Output the encrypted

message

printf("%s\n", encrypted);

return 0;

}

// Implement the caesarCipher function in the solution section!

You Need to Only Define The Function and Complete The Rest of The Code.