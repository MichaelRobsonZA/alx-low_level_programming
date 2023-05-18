#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given position
 * @head: double pointer to the head of the list
 * @index: index of the node to delete, starting from 0
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i;

    /* Special case: list is empty */
    if (*head == NULL)
        return (-1);

    /* Special case: delete first node */
    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return (1);
    }

    /* Traverse list to find deletion point */
    for (i = 0; i < index && current != NULL; i++)
        current = current->next;

    if (current == NULL)
        return (-1);

    current->prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = current->prev;
    free(current);

    return (1);
}

