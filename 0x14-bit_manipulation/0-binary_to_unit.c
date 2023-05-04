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

	unsigned int output = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0')
			output = (output << 1) | 0;

		else if (*b == '1')
			output = (output << 1) | 1;

		else
			return (0);

		b++;
	}

	return (output);
}
