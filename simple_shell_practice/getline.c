#include <stdio.h>
#include <stdlib.h>
#include <string.h>

ssize_t custom_getline(char **lineptr, size_t *n, FILE *stream) {
    if (lineptr == NULL || n == NULL) {
        return -1;  // Invalid arguments
    }

    size_t capacity = *n;
    char *buffer = *lineptr;

    if (buffer == NULL) {
        capacity = 128;  // Initial buffer size
        buffer = (char *)malloc(capacity);
        if (buffer == NULL) {
            return -1;  // Memory allocation error
        }
    }

    size_t pos = 0;
    int c;

    while (1) {
        c = fgetc(stream);
        if (c == EOF) {
            if (pos == 0) {
                return -1;  // No data read
            }
            break;
        }

        if (pos >= capacity - 1) {
            capacity *= 2;
            char *new_buffer = (char *)realloc(buffer, capacity);
            if (new_buffer == NULL) {
                free(buffer);
                return -1;  // Memory reallocation error
            }
            buffer = new_buffer;
        }

        buffer[pos++] = (char)c;

        if (c == '\n') {
            break;
        }
    }

    buffer[pos] = '\0';
    *lineptr = buffer;
    *n = capacity;

    return (ssize_t)pos;
}

int main() {
    char *input = NULL;
    size_t len = 0;
    ssize_t read;

    while (1) {
        // Print the prompt
        printf("$ ");

        // Read the user's input using custom_getline
        read = custom_getline(&input, &len, stdin);

        if (read == -1) {
            // Check for end-of-file (Ctrl+D)
            if (feof(stdin)) {
                printf("\nEnd of input. Exiting...\n");
                break;
            } else {
                perror("custom_getline");
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
