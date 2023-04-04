#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a list
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer value to be stored in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *temp = *head;
    unsigned int i;

    /* allocate memory for the new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    /* set the values of the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* if index is 0, make the new node the head of the list */
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    /* traverse the list to find the node before the desired index */
    for (i = 0; i < idx - 1; i++)
    {
        /* if end of list is reached before desired index, free new node and return NULL */
        if (temp == NULL)
        {
            free(new_node);
            return (NULL);
        }
        temp = temp->next;
    }

    /* insert the new node at the desired index */
    new_node->next = temp->next;
    temp->next = new_node;

    return (new_node);
}
