#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function that deletes the
 * node at index index of a listint_t linked list.
 * @head: head pointer
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *dtNode;
	unsigned int i;

	node = *head;
	if (*head == NULL)
		return (-1);

	i = 0;
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
	}
	else
	{
		while (i < index - 1)
		{
			node = node->next;
			if (node == NULL)
				return (-1);
			i++;
		}
		dtNode = node;
		dtNode = dtNode->next;
		node->next = dtNode->next;
		free(dtNode);
	}
	return (1);
}
