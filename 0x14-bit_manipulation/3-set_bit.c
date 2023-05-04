#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index
 * @n: pointer to an unsigned long int
 * @index: index of the bit to change
 *
 * Return: 1 if sucessful else -1 in case an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	i <<= index;
	*n |= i;
	return (1);

}
