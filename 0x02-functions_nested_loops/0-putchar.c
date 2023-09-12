#include "main.h"
#include <string.h>
/**
 * main - prints _putchar
 * is written by JabbzTheCoder
 * Return 0
 */
int main(void)
{
	char str[] = "_putchar";

	int len;

	len = strlen(str);

	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
