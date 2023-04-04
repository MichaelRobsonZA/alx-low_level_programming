#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 * @head: pointer to a pointer to the first element of the list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    /* Declare a pointer to a listint_t node called current and initialize
       it to *head */
    listint_t *current = *head;
    /* Declare a pointer to a listint_t node called prev and initialize it
       to NULL */
    listint_t *prev = NULL;
    /* Declare a variable called i of type unsigned int and initialize it to 0 */
    unsigned int i = 0;

    /* If head is NULL, return -1 */
    if (*head == NULL)
        return (-1);

    /* If index is 0, set *head to (*head)->next, free current, and return 1 */
    if (index == 0)
    {
        *head = (*head)->next;
        free(current);
        return (1);
    }

    /* Loop through the list until either the end of the list is reached or
       i is equal to index */
    while (current != NULL && i != index)
    {
        /* Set prev to current */
        prev = current;
        /* Set current to the next node */
        current = current->next;
        /* Increment i */
        i++;
    }

    /* If current is NULL, index is out of range, so return -1 */
    if (current == NULL)
        return (-1);

    /* Set prev->next to current->next, free current, and return 1 */
    prev->next = current->next;
    free(current);
    return (1);
}
