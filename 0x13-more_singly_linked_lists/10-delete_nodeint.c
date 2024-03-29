#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: double pointer to the head of the linked list
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *previous_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	previous_node = NULL;
	current_node  = *head;
	for (i = 0; current_node && i < index; i++)
	{
		previous_node = current_node;
		current_node = current_node->next;
	}

	if (i != index)
		return (-1);

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
