#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Write a function that returns the number of elements
 * in a linked listint_t list.
 * @h: structure input pointer
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		node = node->next;
		nodes++;
	}
	return (nodes);
}
