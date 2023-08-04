#include <stdio.h>
#include "main.h"

/**
 * _strchr - creates pointer to first char occurance
 *
 * @s: sting input
 *
 * @c: char to point to
 *
 * Return: a pointer
 */

char *_strchr(char *s, char c)
{
	char *src;

	while (*s != c)
	{
		s++;
	}
	if (*s == c)
	{
		src = s;
		return (src);
	}
	else
	{
		return (NULL);
	}
}
