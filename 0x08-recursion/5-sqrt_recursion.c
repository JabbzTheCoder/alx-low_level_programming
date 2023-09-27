#include "main.h"

/**
 * _sqrt_recursion - Calculate the natural square root
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of n
 **/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n <= 1)
	{
		return (n);
	}
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Helper function to recursively.
 * @n: The number for which to calculate the square root.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if it doesn'
 **/
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, guess + 1));
	}
}
