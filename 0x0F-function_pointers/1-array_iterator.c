#include <stdio.h>

/**
 * array_iterator - Iterates over an array and applies a function to each element.
 * @array: Pointer to an array of integers.
 * @size: Number of elements in the array.
 * @action: Pointer to a function that takes an integer as an argument.
 *
 * This function iterates over the given array and applies the provided function
 * to each element of the array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
