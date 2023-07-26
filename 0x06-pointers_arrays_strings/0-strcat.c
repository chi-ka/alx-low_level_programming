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

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';

	return (dest);
}
