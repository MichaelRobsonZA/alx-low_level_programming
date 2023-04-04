#include "lists.h"

/**
 * pop_listint - removes the head node of a listint_t linked list
 * @head: pointer to the head node pointer of the list
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
    int data; /* variable to store head node's data */
    listint_t *temp; /* temporary variable to store head node */

    /* check if the head node is NULL */
    if (*head == NULL)
        return (0); /* if so, return 0 as specified by the task */

    /* store the head node's data in the variable */
    data = (*head)->n;

    /* move the head node to the next node in the linked list */
    temp = *head;
    *head = (*head)->next;

    /* free the original head node */
    free(temp);

    /* return the stored data value */
    return (data);
}

