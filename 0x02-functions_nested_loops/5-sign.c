#include "main.h"

/**
 * print_sign - Checks if a character is lowercase.
 * @n: The character to be checked.
 *
 * Return: 1 if 'c' is a lowercase letter, 0 otherwise.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
