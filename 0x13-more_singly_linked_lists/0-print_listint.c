#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - check the code
 * @h : list
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}

	size_t n;
	listint_t nxtNode;

	nxtNode = h;
	n = 0;

	while (nxtNode != NULL)
	{
		printf("%d\n", nxtNode->n);
		n++;
		nxtNode = nxtNode->next;
	}

	return (n);
}
