#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(char) * size);
		int i;

		if (arr != NULL)
		{
			for (i = 0; i < size; i++)
			{
				arr[i] = c;
			}
			return (*arr);
		}
		return (NULL);
	}
}
