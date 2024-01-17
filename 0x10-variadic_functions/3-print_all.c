#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * print_char - A function that prints characters
 * @valist: type for iterating arguments
 * Return: Character values
 */

void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - A function that prints integers
 * @valist: type for iterating arguments
 * Return: Integer values
 */

void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - A function that prints floating points
 * @valist: type for iterating arguments
 * Return: floating point values
 */

void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - A function that prints strings
 * @valist: type for iterating arguments
 * Return: String values
 */

void print_string(va_list valist)
{
	char *s;

	s = va_arg(valist, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print varying input of ints, chars, floats, and strings
 * @format: A list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j = 0;
	va_list valist;

	datatype choice[] = { {'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL} };
	/*iterate format; if datatype matched, access function via struct */
	va_start(valist, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (choice[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", separator);
				choice[i].func(valist); /*access va_arg later*/
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(valist);
	printf("\n");
}
