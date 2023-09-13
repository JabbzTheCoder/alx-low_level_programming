#include "main.h"

/**
 * print_last_digit - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if 'c' is a lowercase letter, 0 otherwise.
 */

int print_last_digit(int c)
{
	int lastDigit;

	lastDigit = c % 10;

	return (lastDigit);
}
