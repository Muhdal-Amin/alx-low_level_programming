#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	int i;

	const list_t *c = h;

	for (i = 0; c; i++)
	{
		if (c->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", c->len, c->str);
		c = c->next;
		count++;
	}
	return (count);
}
