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

char small, cap;

for (small = 'a'; small <= 'z'; small++)

{
putchar(small);
}

for (cap = 'A'; cap <= 'Z'; cap++)

{
putchar(cap);
}

putchar('\n');

return (0);

}
