#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to head pointer
 * @str: str inpute
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(struct list_s));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
