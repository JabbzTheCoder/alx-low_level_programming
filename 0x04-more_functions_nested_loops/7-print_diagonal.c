#include "main.h"

/**
 * print_diagonal - check the code
 *@n: len of line
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
