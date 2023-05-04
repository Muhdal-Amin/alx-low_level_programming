#include "main.h"

/**
 * binary_to_uint - converts a binary number string to an unsigned integer.
 * @b: pointer to the binary number string
 *
 * Return: the converted unsigned integer, or 0 if there is one more
 * chars in the string b that is not 0 or 1 or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
