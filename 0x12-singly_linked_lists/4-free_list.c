#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to head node of linked list
 *
 * This function frees all nodes in a linked list.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
