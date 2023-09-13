#include "main.h"

/**
 * _abs - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if 'c' is a lowercase letter, 0 otherwise.
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}
