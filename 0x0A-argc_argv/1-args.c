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
	(void) argv;
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
