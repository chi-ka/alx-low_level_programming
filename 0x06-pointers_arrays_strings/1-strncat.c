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

char *_strncat(char *dest, char *src, int n)
{
	char *d;
	char *s;

	d = dest;
	s = src;
	while (*d != '\0')
	{
		d++;
	}
	while ((n > 0) && (*s != '\0'))
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	*d = '\0';
	d = dest;

	return (d);
}
