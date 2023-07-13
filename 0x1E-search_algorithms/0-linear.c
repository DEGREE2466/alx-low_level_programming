#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - For searching a value in an array of integers
 * using the linear search.
 *
 * @array: an array of integers
 * @size: The size of the array
 * @value: Value to search for
 *
 * Return: the index where @value is in the array or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
