#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Checks if it is a letter
 *
 *Check @c is a letter
 *
 *Return: 1  if @c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
