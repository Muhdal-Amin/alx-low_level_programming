#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 * Return: pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(*table));
	hash_node_t **items;
	unsigned long int count = 0;

	if (!table)
		return (0);
	items = malloc(size * sizeof(*items));
	if (!items)
	{
		free(table);
		return (0);
	}
	while (count < size)
	{
		items[count] = NULL;
		count++;
	}
	table->size = size;
	table->array = items;
	return (table);
}
