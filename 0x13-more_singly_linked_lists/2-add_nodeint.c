#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list_t list.
 * @head: A pointer to a pointer to the head of the list_t list.
 * @n: An integer.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* set the value of the new node */
	new_node->n = n;

	/* Set the next pointer of the new node to the current head */
	new_node->next = *head;

	/* Set the head pointer to the new node */
	*head = new_node;

	return (new_node);
}
