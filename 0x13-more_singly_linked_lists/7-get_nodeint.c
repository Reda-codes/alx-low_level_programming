#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 * @head: head pointer
 * @index:  the index of the node
 * Return: the nth node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;

	if (head == NULL)
		return (0);

	node = head;

	while (index != 0)
	{
		node = node->next;
		index--;
		if (node == NULL)
			return (0);
	}

	return (node);
}
