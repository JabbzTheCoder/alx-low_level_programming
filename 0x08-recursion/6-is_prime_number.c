#include "main.h"

int is_prime_helper(int n, int divisor);
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
	return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - check the code
 * @n: num
 * @divisor: divisor
 * Return: Always 0.
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, divisor + 1));
}
