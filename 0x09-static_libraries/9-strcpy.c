#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy a string
 *
 * @dest: destination pointer
 *
 * @src: source pointer
 *
 * Return: retrn string
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_start);
}
