#include <stdio.h>

/**
*main - prints its name
*
*@argc: count of the arguements supllied to the program
*@argv: points to the strings of the arguement passed
*
*Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
	printf("%s\n", argv[count]);
	}
	return (0);
}
