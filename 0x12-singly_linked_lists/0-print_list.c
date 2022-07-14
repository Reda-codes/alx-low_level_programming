#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: structure inpus pointer
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		if (node->str != NULL)
		{
			printf("[%d] %s\n", node->len, node->str);
		}
		else
		{
			printf("[%d] %s\n", node->len, "(nil)");
		}

		node = node->next;
		nodes++;
	}
	return (nodes);
}
