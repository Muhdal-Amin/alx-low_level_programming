#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	int i;

	const listint_t *c = h;

	while (c != NULL)
	{
		printf("[%d]\n", c->n);
		c = c->next;
		count++;
	}
	return (count);
}
