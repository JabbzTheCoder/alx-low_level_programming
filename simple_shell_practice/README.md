Everything you need to know to start coding your own shell

PID & PPID:
A process is an instance of an executing program, that has a unique process ID. This process ID is used by many functions and system calls to interact with and manipulate processes. In order to retrieve the current process’ ID, you can use the system call getpid (man 2 getpid)

Arguments:
The command line arguments are passed through the main function: int main(int ac, char **av);

av is a NULL terminated array of strings
ac is the number of items in av
av[0] usually contains the name used to invoke the current program. av[1] is the first argument of the program, av[2] the second, and so on.

The getline function you are referring to is typically documented in section 3 of the Unix manual pages, which covers C library functions. The getline function is used to read lines from a stream, such as a file or standard input, and it dynamically allocates memory to store the line. The function's prototype is:

c
Copy code
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
Here's a brief explanation of the parameters:

lineptr: A pointer to a pointer that will be used to store the address of the buffer where the line is stored. This pointer should be initialized to NULL or a pointer to a buffer allocated with malloc before calling getline. If the buffer is not large enough to hold the line, getline will dynamically allocate memory as needed.
n: A pointer to a size_t that specifies the size of the buffer pointed to by lineptr. This should also be initialized to zero or the size of the buffer before calling getline. If the buffer is not large enough, getline will dynamically allocate memory and update n to the new buffer size.
stream: A pointer to a FILE structure representing the input stream from which you want to read lines. This can be a file, stdin for standard input, or any other valid input stream.
The getline function reads a line from the specified stream and stores it in the buffer pointed to by lineptr. It returns the number of characters read (including the newline character) or -1 on error.


