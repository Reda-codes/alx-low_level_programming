#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to head pointer
 * @str: str inpute
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *node;

	node = *head;
	while (node && node->next != NULL)
	{
		node = node->next;
	}
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
