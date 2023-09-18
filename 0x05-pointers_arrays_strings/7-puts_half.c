#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string.
 * @s: The string to be printed.
 */
void puts_half(char *s)
{
	int fullLen = strlen(s);
	int start;

	if (fullLen % 2 == 0)
	{
		start = (fullLen -1)  / 2;
	}
	else
	{
		start = (fullLen - 1) / 2;
	}

	for (; s[start] != '\0'; start++)
	{
		_putchar(s[start]);
	}
	_putchar('\n');
}
