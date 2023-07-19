#include <stdio.h>
#include "main.h"

/**
 * add - This adds two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: returns the sum od @a and @b
 */

int add(int a, int b)
{
	int c;

	c = a + b;
	_putchar((c / 10));
	_putchar((c % 10));

	return (c);
}
