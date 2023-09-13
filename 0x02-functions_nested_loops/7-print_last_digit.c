#include "main.h"

/**
 * print_last_digit - Checks if a character is lowercase.
 * @n: The character to be checked.
 *
 * Return: 1 if 'c' is a lowercase letter, 0 otherwise.
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;
	last_digit = n % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
