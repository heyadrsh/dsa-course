#include <stdio.h>
#include <ctype.h>

int main() {
    int letterCounts[26] = {0};  // Array to hold counts (initialized to zero)
    char currentChar;

    while ((currentChar = getchar()) != EOF) {
        if (isalpha(currentChar)) {
            currentChar = tolower(currentChar); // Convert to lowercase
            letterCounts[currentChar - 'a']++;  // Increment count
        }
    }

    // Print the results
    for (int i = 0; i < 26; i++) {
        printf("Letter %c or %c appears %d times\n", i + 'a', i + 'A', letterCounts[i]);
    }

    return 0;
}
