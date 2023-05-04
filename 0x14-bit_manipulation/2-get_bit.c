#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: An integer whose bit value is to be returned
 * @index: The index of the bit to retrieve
 *
 * Return: The value of the bit at the specified index or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	n >>= index;

	if ((n & 1) == 1)
		return (1);

	else
		return (0);

}
