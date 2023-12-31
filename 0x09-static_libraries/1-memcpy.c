#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: destination of copy
 *
 * @src: src of copy
 *
 * @n: amount to copy
 *
 * Return: a char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
