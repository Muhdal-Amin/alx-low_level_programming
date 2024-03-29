#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list_t list.
 * @head: A pointer to a pointer to the head of the list_t list.
 * @str: The string value to be added to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

/* Set the string value of the new node */
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Set the length of the new node's string */
	new_node->len = strlen(str);

	/* Set the next pointer of the new node to the current head */
	new_node->next = *head;

	/* Set the head pointer to the new node */
	*head = new_node;

	return (new_node);
}
