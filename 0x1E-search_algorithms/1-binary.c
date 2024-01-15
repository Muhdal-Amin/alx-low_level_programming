#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * binary_search - A function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: sorted array of integers to be searched
 * @size: the size of the array
 * @value: the integer value to be searched for in the array
 * Return: the index of searched value or -1 if value is not found
 * or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	if (array == NULL)
		return (-1);

	for (start = 0, end = size - 1; end >= start;)
	{
		printf("Array Search....: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		i = start + (end - start) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			end = i - 1;
		else
			start = i + 1;
	}

	return (-1);
}
