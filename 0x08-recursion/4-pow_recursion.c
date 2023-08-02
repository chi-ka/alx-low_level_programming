#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - power of a number
 *
 * @x: ineger to raise to power
 *
 * @y: power to raise to
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, (y - 1)));
}
