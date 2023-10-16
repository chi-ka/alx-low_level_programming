#include <stdio.h>
#include "main.h"

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
