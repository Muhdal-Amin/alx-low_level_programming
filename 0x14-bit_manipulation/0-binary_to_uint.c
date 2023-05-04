#include "main.h"

/**
 * binary_to_uint - converts a binary number string to an unsigned integer
 * @b: pointer to the binary number string
 *
 * Return: the converted unsigned integer, or 0 if there is one more
 *         chars in the string b that is not 0 or 1 or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int total, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}

	return (total);
}
