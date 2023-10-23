#include <stdio.h>
#include "lists.h"

/**
 * size_t listint_len(const listint_t *h) - Prints all elements of a listint_t list.
 * @h: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
