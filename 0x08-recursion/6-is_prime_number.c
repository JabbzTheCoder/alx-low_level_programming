#include "main.h"

/**
 * is_prime_number - check the code
 * @n: num
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_number(n, divisor + 1));
}
