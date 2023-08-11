#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block with a new size.
 *
 * @ptr: Pointer to the memory block to be reallocated.
 *
 * @old_size: Size of the old memory block in bytes.
 *
 * @new_size: Size of the new memory block in bytes.
 *
 * Return: On success, a pointer to the reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *new_array, *temp_ptr;
	unsigned int i, j = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_array = (int *)malloc(sizeof(int) * new_size);
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	temp_ptr = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		new_array[j] = temp_ptr[i];
	}
	free(ptr);

	return (new_array);
}
