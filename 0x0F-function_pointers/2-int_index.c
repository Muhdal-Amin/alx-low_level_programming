#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 *
 * @array: the integer array to search
 * @size: the number of elements in the array
 * @cmp: the comparison function to use
 *
 * Return: the index of the first element for which cmp does not return 0,
 * or -1 if no element matches or size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
	{
		return (-1);
	}

	if (size && cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);
			if (j != 0)
				return (i);
		}
	}
	return (-1);
}
