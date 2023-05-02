#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: pointer to the head node of a list.
 * @index: index of the node.
 *
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head != NULL)
		{
		head = head->next;
		}

		else
		{
			return (NULL);
		}
	}

	return (head);
}
