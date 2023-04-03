#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head node of the list
 *
 * This function frees a linked list of type listint_t. It takes a pointer to
 * the head node of the list, and sets the head to NULL after freeing the entire
 * list.
 */
void free_listint(listint_t *head)
{
    listint_t *temp;  /* declare a temporary variable to store current node */

    /* check if the head node is NULL */
    if (head == NULL)
        return;

    /* loop through each node in the list */
    while (head != NULL)
    {
        temp = head;  /* store the current node in the temporary variable */
        head = head->next;  /* move the head pointer to the next node */
        free(temp);  /* free the memory of the current node */
    }

    /* set the head to NULL after freeing the entire list */
    head = NULL;
}

