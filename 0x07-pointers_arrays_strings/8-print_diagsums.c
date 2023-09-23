#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 * @a: a
 * @size: size
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int primary_diag_sum = 0;
	int secondary_diag_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		primary_diag_sum += a[i * size + i];
		secondary_diag_sum += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", primary_diag_sum, secondary_diag_sum);
}
