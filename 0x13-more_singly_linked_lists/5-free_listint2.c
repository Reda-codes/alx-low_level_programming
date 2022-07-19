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
        listint_t *nextNode;

        node = NULL;

        while (node != NULL)
        {
                nextNode = node->next;
                free(node);
                node = nextNode;
        }
}
