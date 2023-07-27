#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string
 *
 * @a: imput string
 *
 * Return: returns a string
 */

char* leet(char *str)
{
	char leetMap[128] = {0};
	char *result = str;

	leetMap['a'] = leetMap['A'] = '4';
	leetMap['e'] = leetMap['E'] = '3';
	leetMap['o'] = leetMap['O'] = '0';
	leetMap['t'] = leetMap['T'] = '7';
	leetMap['l'] = leetMap['L'] = '1';

	while (*str != '\0') 
	{
		if (leetMap[(unsigned char)*str])
		{
			*str = leetMap[(unsigned char)*str];
		}
		str++;
	}
	return (result);
}
