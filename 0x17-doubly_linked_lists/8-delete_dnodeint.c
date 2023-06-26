#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a specified index
 * @head: The head pointer to the list
 * @index: The index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *after;

	current = *head;
	if (*head == NULL || index > dlistint_len(current))
		return (-1);

	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			return (-1);
		}
		else
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
			free(current);
			return (1);
		}
	}

	while (index > 0 && current)
	{
		current = current->next;
		index--;
	}
	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	after = current->next;
	current->prev->next = after;
	after->prev = current->prev;
	free(current);
	current = NULL;
	return (1);
}


/**
 * dlistint_len - Returns the number of elements of a doubly linked list
 * @h: The head pointer of the list
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
