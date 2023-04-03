#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head node of the list.
 * @n: The integer to store in the new node.
 *
 * Return: If memory allocation fails or head is NULL, returns NULL.
 *         Otherwise, returns the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node, *last_node;

    if (head == NULL)
        return (NULL);

    /* Create new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = n;
    new_node->next = NULL;

    /* If list is empty, new node is the head */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* Traverse list to find last node */
    last_node = *head;
    while (last_node->next != NULL)
        last_node = last_node->next;

    /* Add new node to end of list */
    last_node->next = new_node;

    return (new_node);
}
