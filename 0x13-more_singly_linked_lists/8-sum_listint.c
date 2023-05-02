#include "lists.h"

/**
 *sum_listint - print elements and return the sum of elements in a list
 *@head: pointer to the head node of a list
 *Return: sum of elements in list or null if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;

	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
