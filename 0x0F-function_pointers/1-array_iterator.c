#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints a name as is
 * @array : array
 * @size : name of the person
 * @action : function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
