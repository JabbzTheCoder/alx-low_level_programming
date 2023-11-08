#include <stdio.h>

/**
 * main - Entry point.
 * @ac: Number of arguments.
 * @av: Array of arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int i = 1; // Start from av[1] since av[0] is the program name

    // Loop through av until a NULL pointer is encountered
    while (av[i] != NULL)
    {
        printf("Argument %d: %s\n", i, av[i]);
        i++;
    }

    printf("Number of args: %d\n", ac);
    return (0);
}
