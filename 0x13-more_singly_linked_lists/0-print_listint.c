#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	/* Declare and initialize a counter for the number of nodes */
	size_t count = 0;

	/* Traverse the list until we reach the end */
	while (h != NULL)
	{
		/* Print the value of the current node */
		printf("%d\n", h->n);

		/* Update the current node to point to the next node */
		h = h->next;

		/* Increment the counter for the number of nodes */
		count++;
	}

	/* Return the total number of nodes */
	return (count);
}
