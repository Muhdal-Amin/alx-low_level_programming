#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_digit_string - checks if a string is composed only of digits
 * @str: the string to check
 *
 * Return: 1 if str is composed only of digits, 0 otherwise
 */
int is_digit_string(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * multiply - multiplies two strings representing positive integers
 * @num1: the first number to multiply
 * @num2: the second number to multiply
 */
void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);

	int *result = (int *) malloc(sizeof(int) * (len1 + len2));

	for (int i = 0; i < len1 + len2; i++)
	{
		result[i] = 0;
        }
	int i_n1 = 0;
	int i_n2 = 0;

	for (int i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n1 = num1[i] - '0';
		i_n2 = 0;
		
		for (int j = len2 - 1; j >= 0; j--)
		{
			int n2 = num2[j] - '0';
			int sum = n1 * n2 + result[i_n1 + i_n2] + carry;
			carry = sum / 10;
			result[i_n1 + i_n2] = sum % 10;
			i_n2++;
		}
		
		if (carry > 0)
		{
			result[i_n1 + i_n2] += carry;
		}

		i_n1++;
	}

	int i = len1 + len2 - 1;

	while (i >= 0 && result[i] == 0)
	{	
		i--;
	}

	if (i < 0)
	{
		printf("0\n");
	}
	else
	{
		for (; i >= 0; i--)
		{
			printf("%d", result[i]);
		}
		printf("\n");
	}
	free(result);
}

/**
 * main - entry point
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 if successful, 98 if there is an error
 */
int main(int argc, char **argv)
{
        if (argc != 3)
	{
                printf("Error\n");
                return (98);
        }
        if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
                printf("Error\n");
                return (98);
        }
        multiply(argv[1], argv[2]);
        return (0);
}
