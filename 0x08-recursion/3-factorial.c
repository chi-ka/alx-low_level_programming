#include <stdio.h>
#include "main.h"

/**
 * factorial - factorial of a number
 *
 * @n: number input
 *
 * Return: an integer
 */

int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
