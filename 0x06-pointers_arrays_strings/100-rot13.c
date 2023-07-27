#include <stdio.h>
#include "main.h"

/**
 * rot13 - encrpyt with rot13
 *
 * @str: input string
 *
 * Return: output string
 */

char *rot13(char *str)
{
	char base;
	char *result = str;

	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			base = (*str >= 'a') ? 'a' : 'A';
			*str = base + ((*str - base + 13) % 26);
		}
		str++;
	}

	return (result);
}
