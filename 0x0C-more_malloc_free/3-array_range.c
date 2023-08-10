#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Generates an array of integers within a specified range
 *
 * @min: The minimum value of the range
 *
 * @max: The maximum value of the range
 *
 * Return: A pointer to array, or NULL on failure.
 */

int *array_range(int min, int max)
{
	int *new_array;
	int i, j = 0;

	if (min > max)
	{
		return (NULL);
	}
	new_array = (int *)malloc(sizeof(int) * ((max - min) + 1));
	if (new_array == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++, j++)
	{
		new_array[j] = i;
	}

	return (new_array);
}
