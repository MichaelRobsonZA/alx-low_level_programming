#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list
 * @h: pointer to the list_t list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t node_count = 0;

    while (h)
    {
        printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");
        h = h->next;
        node_count++;
    }

    return (node_count);
}

