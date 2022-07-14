#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: structure input pointer
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		node = node->next;
		nodes++;
	}
	return (nodes);
}
