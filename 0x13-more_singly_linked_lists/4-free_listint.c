#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * Return: The address of the new element, or NULL if it failed.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);

	}
}
