#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - check the code
 * @head: head
 * @str: str
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(newNode->str);

	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
