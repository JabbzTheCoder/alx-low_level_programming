#include "main.h"

/**
 * _isupper - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @c: int to check
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
