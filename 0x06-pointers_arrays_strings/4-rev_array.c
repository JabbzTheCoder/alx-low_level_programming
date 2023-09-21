#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int start, end, i;


	for (i = 0; i < n / 2; i++)
	{
		start = a[i];
		end = a[n - 1 - i];
		
		a[i] = end;
		a[n - 1 - i] = start;
	}

}
