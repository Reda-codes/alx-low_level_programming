#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end -  function that adds a new node
 * at the end of a listint_t list.
 * @head: pointer to head pointer
 * @n: n inpute
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *node;

	node = *head;
	while (node && node->next != NULL)
	{
		node = node->next;
	}
	newNode = malloc(sizeof(struct listint_s));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (node)
	{
		node->next = newNode;
	}
	else
	{
		*head = newNode;
	}

	return (newNode);
}
