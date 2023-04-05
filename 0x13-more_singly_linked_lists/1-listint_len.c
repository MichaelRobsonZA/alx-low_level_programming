#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0; /* initialize a counter variable to 0 */

    /* iterate over the list with a loop, until the pointer is NULL */
	while (h != NULL)
	{
		count++; /* increment the counter for each node */
		h = h->next; /* move to the next node */
	}

	return (count); /* return the counter value as the list length */
}

