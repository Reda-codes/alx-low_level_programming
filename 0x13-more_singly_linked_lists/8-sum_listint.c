#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: head pointer
 * Return: sum of data or 0 if empty
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	if (head == NULL)
		return (0);

	node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
