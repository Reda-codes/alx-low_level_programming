#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list.
 * @head: pointer to head pointer
 * @n: n inpute
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(struct listint_s));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
