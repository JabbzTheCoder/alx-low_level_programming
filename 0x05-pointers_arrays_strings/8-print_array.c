#include "main.h"
#include <stdio>
/**
 * print_array - check the code for
 *
 * @a: array
 * @n: number
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
}
