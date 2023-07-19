#include <stdio.h>
#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number.
 *
 * Prototype: int print_sign(int n);
 *
 * @n: is the value to determine the sign of
 *
 * Return: -1 and prints - if n is less than zero, and
 * prints + if n is greater than zero and and prints 0 if n is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
