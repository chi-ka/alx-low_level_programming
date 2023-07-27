#include <stdio.h>
#include "main.h"

/**
 * string_toupper - converts string to upper
 *
 * @a: input string
 *
 * Return: a string.
 */

char *string_toupper(char *a)
{
	char *original = a;

	while (*a != '\0')
	{
		if ((*a >= 'a') && (*a <= 'z'))
		{
			*a -= 32;
		}
		a++;
	}

	return (original);
}
