#include <stdio.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 * @cmp: Pointer to a function used to compare integers.
 *
 * Return: Index of the first element for which the cmp function
 *         does not return 0, or -1 if no such element is found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		
		if (result != 0)
		{
			return (i);
		}
		if (i == (size - 1))
		{
			return (-1);
		}
	}

	return (-1);
}
