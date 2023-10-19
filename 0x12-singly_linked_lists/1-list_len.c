#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code
 *
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *nextNode = h;

	while (nextNode != NULL)
	{
		nextNode = nextNode->next;
		i++;
	}

	return (i);

}
