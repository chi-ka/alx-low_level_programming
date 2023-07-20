#include <stdio.h>
#include "main.h"

/**
 * main - for uppercase character.
 *
 * @c: the alphabet to check
 * 
 * Return: 1 if uppercase and 0 otherwise.
 */

int _isupper (int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
