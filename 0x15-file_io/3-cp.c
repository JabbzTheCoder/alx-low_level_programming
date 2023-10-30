#include "main.h"
#include <stdio.h>

#define BUFFER_SIZE 1024
#define FILE_PERMISSIONS 0664

/**
 * error_file - Check if files can be opened.
 * @source_fd: File descriptor for source file.
 * @dest_fd: File descriptor for destination file.
 * @argv: Arguments vector.
 */
void error_file(int source_fd, int dest_fd, char *argv[]) {
    if (source_fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    if (dest_fd == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
        exit(99);
    }
}

/**
 * copy_files - Copy data from source to destination file.
 * @source_fd: File descriptor for source file.
 * @dest_fd: File descriptor for destination file.
 */
void copy_files(int source_fd, int dest_fd) {
    ssize_t nchars, nwr;
    char buffer[BUFFER_SIZE];

    while ((nchars = read(source_fd, buffer, BUFFER_SIZE)) > 0) {
        nwr = write(dest_fd, buffer, nchars);
        if (nwr == -1) {
            perror("Error writing to destination file");
            exit(99);
        }
    }

    if (nchars == -1) {
        perror("Error reading from source file");
        exit(98);
    }
}

int main(int argc, char *argv[]) {
    int source_fd, dest_fd;

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        return (97);
    }

    source_fd = open(argv[1], O_RDONLY);
    dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, FILE_PERMISSIONS);
    error_file(source_fd, dest_fd, argv);

    copy_files(source_fd, dest_fd);

    int close_source = close(source_fd);
    int close_dest = close(dest_fd);

    if (close_source == -1) {
        perror("Error closing source file descriptor");
        exit(100);
    }

    if (close_dest == -1) {
        perror("Error closing destination file descriptor");
        exit(100);
    }

    return (0);
}
