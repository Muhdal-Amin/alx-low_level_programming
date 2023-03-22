#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Code entry point
 *
 * followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int b = 0;

	while (b < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		putchar('\n');
		b++;
	}
}



