#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -  function that frees a listint_t list &
 * sets the head to NULL.
 * @head: head pointer
 */
void free_listint2(listint_t **head)
{
        listint_t *node;

        if (node = NULL)
		return;

        while (node != NULL)
        {
                node = *head;
                *head = (*head)->next;
                free(node);
        }
}
