#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

char *custom_strtok(char *str, const char *delim, char **save_ptr) {
    // Check if we are starting from the beginning
    if (str != NULL)
        *save_ptr = str;

    // Check if we reached the end of the string
    if (*save_ptr == NULL || **save_ptr == '\0')
        return NULL;

    // Find the start of the token
    char *token_start = *save_ptr;
    while (*token_start != '\0' && strchr(delim, *token_start) != NULL) {
        token_start++;
    }

    // If the end of the string is reached, set save_ptr to NULL and return NULL
    if (*token_start == '\0') {
        *save_ptr = NULL;
        return NULL;
    }

    // Find the end of the token
    char *token_end = token_start;
    while (*token_end != '\0' && strchr(delim, *token_end) == NULL) {
        token_end++;
    }

    // If we reached the end of the string, set save_ptr to NULL
    if (*token_end == '\0') {
        *save_ptr = NULL;
    } else {
        // Null-terminate the token and update save_ptr
        *token_end = '\0';
        *save_ptr = token_end + 1;
    }

    return token_start;
}

int main() {
    // Create a copy of the input string
    char str[] = "apple,orange,banana";
    char *str_copy = strdup(str);  // Make sure to free this memory later

    const char delim[] = ",";

    // Use custom_strtok to tokenize the string
    char *token = custom_strtok(str_copy, delim, NULL);

    // Iterate through the tokens
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = custom_strtok(NULL, delim, NULL);
    }

    // Free the dynamically allocated memory
    free(str_copy);

    return 0;
}
