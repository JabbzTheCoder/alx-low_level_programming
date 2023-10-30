#include "main.h"
#include <stdio.h>

/**
 * error_file - Check if files can be opened successfully.
 * @source_fd: File descriptor for the source file.
 * @dest_fd: File descriptor for the destination file.
 * @argv: Arguments vector.
 */
void error_file(int source_fd, int dest_fd, char *argv) {
    if (source_fd == -1) {
        dprintf(STDERR_FILENO, "Error: Unable to read from file %s\n", argv[1]);
        exit(98);
    }
    if (dest_fd == -1) {
        dprintf(STDERR_FILENO, "Error: Unable to write to file %s\n", argv[2]);
        exit(99);
    }
}

/**
 * main - Copy the contents of one file to another.
 * @argc: Number of arguments.
 * @argv: Arguments vector.
 * Return: 0 on success, other values on error.
 */
int main(int argc, char *argv) {
    int source_fd, dest_fd, err_close;
    ssize_t nchars, nwr;
    char buffer[1024];

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp source_file destination_file\n");
        return 97;
    }

    source_fd = open(argv[1], O_RDONLY);
    dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
    error_file(source_fd, dest_fd, argv);

    while ((nchars = read(source_fd, buffer, sizeof(buffer)) > 0) {
        nwr = write(dest_fd, buffer, nchars);
        if (nwr == -1) {
            dprintf(STDERR_FILENO, "Error: Unable to write to file %s\n", argv[2]);
            exit(99);
        }
    }

    if (nchars == -1) {
        dprintf(STDERR_FILENO, "Error: Unable to read from file %s\n", argv[1]);
        exit(98);
    }

    err_close = close(source_fd);
    if (err_close == -1) {
        dprintf(STDERR_FILENO, "Error: Unable to close source file descriptor\n");
        exit(100);
    }

    err_close = close(dest_fd);
    if (err_close == -1) {
        dprintf(STDERR_FILENO, "Error: Unable to close destination file descriptor\n");
        exit(100);
    }

    return 0;
}
