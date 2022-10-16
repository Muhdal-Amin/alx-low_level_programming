#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

srand(time(0));
n = rand() - RAND_MAX / 2;

int lastDigit;

lastDigit = n % 10;

if (lastDigit > 5)

{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}

else if (lastDigit == 0)

{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}

else

{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}

return (0);

}