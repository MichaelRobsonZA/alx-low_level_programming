#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where new node should be added, starting from 0
 * @n: value to assign to the new node
 *
 * Return: address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current = *h;
    unsigned int i;

    /* Create new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    /* Special case: insert at beginning of list */
    if (idx == 0)
    {
        new_node->next = current;
        if (current != NULL)
            current->prev = new_node;
        *h = new_node;
        return (new_node);
    }

    /* Traverse the list to find the insertion point */
    for (i = 0; i < idx - 1 && current != NULL; i++)
        current = current->next;

    if (current == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->next = current->next;
    new_node->prev = current;
    if (current->next != NULL)
        current->next->prev = new_node;
    current->next = new_node;

    return (new_node);
}

