#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - fills memory with constant byte
 *
 * @n: number of bytes
 *
 * @s: points to s
 *
 * @b: constant byte b
 *
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *temp;

	temp = s;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (temp);
}

/**
 * _calloc - Allocates memory for an array and initializes to zeros
 *
 * @nmemb: Number of elements in the array
 *
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

