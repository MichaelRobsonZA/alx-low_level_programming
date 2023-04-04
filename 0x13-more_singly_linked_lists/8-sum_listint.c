#include "lists.h"

/**
 * sum_listint - computes the sum of all the data (n) of a listint_t list.
 * @head: A pointer to the head of the list.
 *
 * Return: If the list is empty, return 0. Otherwise, return the sum of all the
 *         data (n) of the list.
 */
int sum_listint(listint_t *head)
{
    int sum = 0; /* Initialize sum to 0 */

    /* Traverse the linked list and accumulate the sum of n values */
    while (head != NULL)
    {
        sum += head->n; /* Add the value of n of the current node to sum */
        head = head->next; /* Move to the next node */
    }

    return (sum); /* Return the final sum */
}
