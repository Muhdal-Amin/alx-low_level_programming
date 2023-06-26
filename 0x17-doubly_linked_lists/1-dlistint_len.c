#include "lists.h"

/**
 * dlistint_len - Returns the number of elements of a doubly linked list
 * @h: The head pointer of the list
 *
 * Return: The number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
  int counter = 0;

  while (h != NULL)
    {
      counter++;
      h = h->next;
    }
  return (counter);
}
