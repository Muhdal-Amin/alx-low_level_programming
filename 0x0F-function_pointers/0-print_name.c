#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name.
 * @name: A pointer to the name to print.
 * @f: A function pointer to a function that takes a char * argument
 *     and returns void.
 *
 * Description: This function takes a string pointer @name and a function
 * pointer @f as arguments. It then calls the function @f with @name as its
 * argument to print the name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
