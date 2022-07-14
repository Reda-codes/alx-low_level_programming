#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list.
 * @head: head pointer
 */
void free_list(list_t *head)
{
	list_t *node;
	list_t *nextNode;

	node = head;

	while (node != NULL)
	{
		nextNode = node->next;
		free(node->str);
		free(node);
		node = nextNode;
	}
}
