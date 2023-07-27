#include <stdio.h>
#include "main.h"

/**
 * strncat - concatenates two strings.
 *
 * @dest: beginning string
 *
 * @src: last string
 *
 * @n: int input
 *
 * Return: *char of string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *d;
	char *s;

	d = dest;
	s = src;
	while ((n > '\0') && (*s != '\0'))
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	while (n > 0)
	{ 
		*d = '\0';
		d++;
		n--;
	}
	d = dest;

	return (d);
}
