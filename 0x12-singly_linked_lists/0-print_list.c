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

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
