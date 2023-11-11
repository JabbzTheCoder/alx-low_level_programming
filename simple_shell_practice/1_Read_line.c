#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *input = NULL;
    size_t len = 0;
    ssize_t read;

    while (1) {
        // Print the prompt
        printf("$ ");

        // Read the user's input
        read = getline(&input, &len, stdin);

        if (read == -1) {
            // Check for end-of-file (Ctrl+D)
            if (feof(stdin)) {
                printf("\nEnd of input. Exiting...\n");
                break;
            } else {
                perror("getline");
                break;
            }
        }

        // Remove the newline character at the end of the input
        if (input[read - 1] == '\n') {
            input[read - 1] = '\0';
        }

        // Check for the "exit" command
        if (strcmp(input, "exit") == 0) {
            printf("Exiting...\n");
            break;
        }

        // Print the entered command
        printf("You entered: %s\n", input);
    }

    free(input);

    return 0;
}
