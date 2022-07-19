#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list.
 * @head: head pointer
 */
void free_listint(listint_t *head)
{
	listint_t *node;
	listint_t *nextNode;

	node = head;

	while (node != NULL)
	{
		nextNode = node->next;
		free(node);
		node = nextNode;
	}
}
