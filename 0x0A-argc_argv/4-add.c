#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - writesthe char c to stdout
 * @argc: The character to print
 * @argv: The character to print
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		sum = 0;

		for (i = 1; i < argc; i++)
		{
			char *arg = argv[i];

			j = 0;
			while (arg[j] != '\0')
			{
				if (!isdigit(arg[j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(arg);
		}
		printf("%d\n", sum);
	}

	return (0);
}
