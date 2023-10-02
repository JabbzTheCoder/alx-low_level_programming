#include "main.h"
#include <stdio.h>
/**
 * main - writesthe char c to stdout
 * @argc: The character to print
 * @argv: The character to print
 *
 * Return: 0
 */
#pragma GCC diagnostic ignored "-Wunused-parameter"
int main(int argc, char *argv[])
{
	printf("%s", argv[0]);
	printf("\n");
	return (0);
}
#pragma GCC diagnostic warning "-Wunused-parameter"
