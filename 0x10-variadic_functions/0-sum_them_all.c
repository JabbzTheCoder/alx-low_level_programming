#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - check the code
 * @n: number
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int total;

	if (n == 0)
		return (0);

	va_start(args, n);

	total = 0;

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}

	va_end(args);

	return (total);
}
