#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: beginning string
 *
 * @src: last string
 *
 * Return: *char of string
 */

char *_strcat(char *dest, char *src)
{
	char  *d;
	char *s;

	d = dest;
	s = src;
	while (*d != '\0')
	{
		d++;
	}
	while (*s != '\0')
	{
		*d = *s;
		d++;
		s++;
	}
	d = '\0';
	d = dest;

	return (d);
}
