#include <stdio.h>
#include "main.h"

/**
 *  _isdigit - Entry point to chec if number is btwn 0-9.
 *
 * @c: Parameter to check
 *
 * Return: 1 if True  and 0 otherwise.
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
