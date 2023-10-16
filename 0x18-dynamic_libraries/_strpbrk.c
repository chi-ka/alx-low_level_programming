#include <stdio.h>
#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 *
 * @s: string to search
 *
 * @accept: string to search
 *
 * Return: a char
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return (NULL);
}
