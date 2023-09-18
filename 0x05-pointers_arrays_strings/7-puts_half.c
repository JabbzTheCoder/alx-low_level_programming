#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	for (; str[start] != '\0'; start++)
	{
		putchar(str[start]);
	}
	putchar('\n');
}
