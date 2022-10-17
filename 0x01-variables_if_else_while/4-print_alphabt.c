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

char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)

{

if (alpha == 'q' || alpha == 'e')
{
}

else
{
putchar(alpha);
}

}

putchar('\n');

return (0);

}
