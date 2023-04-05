#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a pointer to a pointer to the first node of the list
 * @n: the integer to be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

    /* assign the value of the integer n to the n field of the new node */
	new_node->n = n;

    /* set the next field of the new node to the current head of the list */
	new_node->next = *head;

    /* set the head of the list to the new node */
	*head = new_node;

    /* return the address of the new node */
	return (new_node);
}
