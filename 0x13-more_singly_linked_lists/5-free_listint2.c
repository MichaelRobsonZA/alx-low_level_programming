#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the head of the list
 *
 * This function frees a listint_t list by iterating through each node
 * and freeing it. The head pointer is set to NULL once all nodes have
 * been freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	/* check if head pointer is NULL */
	if (head == NULL)
		return;

	/* iterate through list, freeing each node */
	while (*head != NULL)
	{
		/* save current node pointer */
		current = *head;

		/* move head pointer to next node */
		*head = (*head)->next;

		/* free current node */
		free(current);
	}

}
