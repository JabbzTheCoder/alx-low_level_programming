#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The integer value to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nwNode;

	nwNode = malloc(sizeof(listint_t));

	if (nwNode == NULL)
		return (NULL);

	nwNode->n = n;
	nwNode->next = *head;
	*head = nwNode;

	return (nwNode);
}
