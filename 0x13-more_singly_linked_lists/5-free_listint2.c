#include "lists.h"

/**
 *free_listint2 - Insert a node at the end of a list.
 *@head: pointer to the head node of the linked list.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
