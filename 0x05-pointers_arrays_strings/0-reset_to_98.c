#include <stdio.h>

/**
 * main - Code entry point
 *
 * followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int *p;

	n = 402;
	p = &n;

	printf("Value of n is %d\n", n);

	*p = 98;

	printf("Value of n after is %d\n", n);

}
