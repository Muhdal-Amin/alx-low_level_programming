#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: The head pointer of the list
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
  int counter = 0;

  while (h != NULL)
    {
      printf("%d\n", h->n);
      counter++;
      h = h->next;
    }
  return (counter);
}
