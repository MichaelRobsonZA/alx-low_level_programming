#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* declare _strlen function */
int _strlen(char *s);

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to a pointer to the head node of the list
 * @str: string to be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* use strlen instead of _strlen */
	new_node->len = strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}

/**
 * _strlen - Computes the length of a string s.
 * @s: pointer to string
 *
 * Return: The length of s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

