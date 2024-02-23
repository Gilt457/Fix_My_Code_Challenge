#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Remove a node at a given index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to remove
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *next, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current = *head;
	i = 0;
	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (i != index || current == NULL)
	{
		return (-1);
	}
	next = current->next;
	prev = current->prev;
	free(current);
	if (index == 0)
	{
		*head = next;
		if (next != NULL)
		{
			next->prev = NULL;
		}
	}
	else
	{
		prev->next = next;
		if (next != NULL)
		{
			next->prev = prev;
		}
	}
	return (1);
i}
