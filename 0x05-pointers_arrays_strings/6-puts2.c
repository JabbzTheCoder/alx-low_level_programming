#include "main.h"

/**
 * puts2 - check the code
 *
 *@s: string to be printed.
 */
void puts2(char *s)
{
	int n = 2;

	while (*s != '\0')
	{
		if (n % 2)
		{
			_putchar(*s);
		}

		n++;
		s++;
	}
	_putchar('\n');
}
