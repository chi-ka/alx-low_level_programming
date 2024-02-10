#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers using
 *               the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where value is located. If value is not present in array
 *         or if array is NULL, return -1.
 */
int jump_search(int *array, size_t size, int value)
{
	int i;
	int jump = (int)sqrt(size);
	int prev = 0;
	int current = jump;

	if (array == NULL)
		return -1;
	
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

	while (current < (int)size && array[current] < value)
	{
		prev = current;
		current += jump;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, current);

	for (i = prev; i <= (current < (int)size - 1 ? current : (int)size - 1); i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}

	return -1;
}
