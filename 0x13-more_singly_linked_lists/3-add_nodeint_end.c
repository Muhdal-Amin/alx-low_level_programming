#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list
 * @n: An integer
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set the value of new node */
	new_node->n = n;

/* Set the next pointer of the new node to NULL */
	new_node->next = NULL;

	/* If the list is empty, set the head pointer to the new node */
	if (*head == NULL)
	{
		*head = new_node;
	}
	/* Otherwise, find the last node and set its next pointer to the new node */
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
