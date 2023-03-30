#include "lists.h"

/**
 * list_len - Calculates the number of elements in a list_t list
 * @h: pointer to the list_t list
 *
 * Return: The number of elements in the list
 */
size_t list_len(const list_t *h)
{
    size_t node_count = 0;

    while (h)
    {
        h = h->next;
        node_count++;
    }

    return (node_count);
}

