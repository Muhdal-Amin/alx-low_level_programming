#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: a pointer to list
 * @idx: the given index
 * @n: the given number
 *
 * Return: a pointer to the newly add node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (i < (idx - 1) && temp->next)
	{
		temp = temp->next;
		i++;
	}

	if (i < idx - 1)
		return (NULL);

	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
