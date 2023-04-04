#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node of the list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;     /* declare a counter variable */
    listint_t *current; /* declare a pointer to the current node */

    /* if the head is NULL, the list is empty, so return NULL */
    if (head == NULL)
        return (NULL);

    /* initialize the current pointer to the head of the list */
    current = head;

    /* loop through the list until we find the index-th node or the end of the list */
    for (i = 0; i < index && current != NULL; i++)
        current = current->next;

    /* if we didn't find the index-th node, return NULL */
    if (current == NULL)
        return (NULL);

    /* otherwise, return a pointer to the index-th node */
    return (current);
}
