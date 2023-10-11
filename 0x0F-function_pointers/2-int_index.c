#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - prints a name as is
 * @array : array
 * @size : name of the person
 * @cmp : function
 * Return: Nothing.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ans, i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		ans = (*cmp)(array[i]);

		if (ans != 0)
			return (i);
	}

	return (-1);
}
