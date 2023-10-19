#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *nextNode = h;

	while (nextNode != NULL)
	{
		if (nextNode->str != NULL)
		{
			printf("[%d] %s\n", nextNode->len, nextNode->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		nextNode = nextNode->next;
		i++;
	}

	return (i);

}
