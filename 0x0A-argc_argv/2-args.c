#include "main.h"
#include <stdio.h>
/**
 * main - writesthe char c to stdout
 * @argc: The character to print
 * @argv: The character to print
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
