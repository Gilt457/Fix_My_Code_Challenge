#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * append_dnodeint - Append a node to the end of a list
 *
 * @head: The pointer to the pointer to the first element of the list
 * @n: The value to store in the new element
 *
 * Return: A pointer to the new element
 */
dlistint_t *append_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	new_node->prev = last_node;
	return (new_node);
}
