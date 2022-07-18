#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a list_t list.
 * @h: structure inpus pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		nodes++;
	}
	return (nodes);
}
