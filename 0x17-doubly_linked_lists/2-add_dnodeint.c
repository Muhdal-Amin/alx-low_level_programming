#include "lists.h"

/**
 * add_dnodeint -  Adds a new node at the beginning of a list
 * @head: Address of the head pointer
 * @n: Data to bbe added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new_node = malloc(sizeof(dlistint_t));

  /* Create new node */
  if (new_node == NULL)
    return (NULL);

  new_node->n = n;
  new_node->prev = NULL;
  new_node->next = NULL;

  /* In case head is an empty list */
  if (*head == NULL)
    {
      *head = new_node;
      return (*head);
    }
  /* If head is not an empty list */
  else
    {
      new_node->next = *head;
      (*head)->prev = new_node;
      *head = new_node;
    }

  return (new_node);
}
