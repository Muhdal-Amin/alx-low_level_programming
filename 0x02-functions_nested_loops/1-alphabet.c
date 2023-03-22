#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Code entry point
 *
 * followed by a new line
 *
 * Return: Always 1 (success)
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar (alpha);
		alpha++;

	}
	putchar ('\n');

}
