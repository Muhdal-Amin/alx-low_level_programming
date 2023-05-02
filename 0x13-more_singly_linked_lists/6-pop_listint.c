#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a list.
 * @head: pointer to the head node of a list.
 * Return: head nodes data or value.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}
