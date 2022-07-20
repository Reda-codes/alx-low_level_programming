#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position.
 * @head: head pointer
 * @idx: position
 * @n: node int
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *node;

	if (head == NULL)
		return (0);

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (0);

	newNode->next = NULL;
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		(*head) = newNode;
		return (newNode);
	}

	node = *head;

	while (idx != 1)
	{
		node = node->next;
		--idx;
		if (node == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = node->next;
	node->next = newNode;

	return (newNode);
}
