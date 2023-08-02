#include <stdio.h>
#include "main.h"

/**
 * checker - checks if n is a prime number
 *
 * @n: input inter
 *
 * @a: number to divide by
 *
 * Return: an int
 */

int checker(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	if (!(n % a) && (a != n))
	{
		return (0);
	}
	return (1 * checker(n, (a - 1)));
}

/**
 * is_prime_number - print prime number
 *
 * @n: input inter
 *
 * Return: an int
 */

int is_prime_number(int n)
{
	int c;

	if (n <= 1)
	{
		return (0);
	}
	c = checker(n, 9);

	return (c);
}
