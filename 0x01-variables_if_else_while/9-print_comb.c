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

int d;

for (d = 0; d <= 9; d++)

{

putchar(d + '0');

if (d == 9)
{
}

else
{
putchar(',');
putchar(' ');
}

}
putchar('\n');

return (0);

}
