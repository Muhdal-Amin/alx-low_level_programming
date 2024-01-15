#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - A function that searches for a value in an array
 * of integers using the linear search algorithm.
 * @array: array to search the integer value
 * @size: size of the array
 * @value: the integer value to search for
 *
 * Return: the index of the found value in the array
 * or -1 if the value is not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		i++;
	}

	return (-1);
}
B
