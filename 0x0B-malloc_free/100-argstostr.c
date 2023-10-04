#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j, index;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1; /* Add 1 for '\n' character */

	result = (char *)malloc(total_length * sizeof(char));
	if (result == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[index++] = av[i][j];
		}
		result[index++] = '\n';
	}

	result[index] = '\0'; /* Null-terminate the string */
	return (result);
}
