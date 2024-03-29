#include "main.h"

/**
 * print_binary - Function that prints the binary representation of an integer
 * @n: The integer to be converted
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');

}
