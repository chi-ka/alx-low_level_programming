#include <stdio.h>

/**
 * linear_search - Entry point
 *
 * *array - array to search
 * size - size of the array
 * value -  value to search for
 * Return: number or -1 if array is null or not seen
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return -1;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}

	return -1;
}
