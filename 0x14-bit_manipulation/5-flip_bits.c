#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n : unsigned long int
 * @m : unsigned long int
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int j = 0;

	i = n ^ m;

	while (i >= 1)
	{
		if ((i & 1) == 1)
			j++;
		i >>= 1;
	}
	return (j);
}
