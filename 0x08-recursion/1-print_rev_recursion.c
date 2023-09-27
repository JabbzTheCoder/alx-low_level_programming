#include "main.h"

/**
 * _print_rev_recursion - check the code
 *@s: string to print
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	int size = strlen(s);
	int i;

	for (i = size - 1; i >= 0; i++)
	{
		putchar(s[i]);
	}
}
