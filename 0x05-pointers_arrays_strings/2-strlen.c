#include <stdio.h>
#include "main.h"

/**
 * _strlen - calculates the lenght of a string
 *
 * @n: string input
 *
 * Returns - the lenght as int
 */

int _strlen(char *s)
{
	int str_len = 0;

	while (*(s + str_len) != '\0')
	{
		str_len += 1;
	}
	return(str_len);
}
