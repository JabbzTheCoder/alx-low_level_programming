#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "apple,orange,banana";

    // Tokenize the string using strtok
    char *token = strtok(str, ",");

    // Iterate through the tokens
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}
