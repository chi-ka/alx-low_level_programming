#include <stdio.h>

/**
 * op_add - adds two integers.
 * @a: first integer
 * @b: secomd integer.
 *
 * Return: The result of addition.
 */

int op_add(int a, int b)
{
	int i;

	i = a + b;

	return (i);
}

/**
 * op_sub - Subtracts a from b.
 * @a: first integer
 * @b: secomd integer.
 *
 * Return: The result of subtraction.
 */

int op_sub(int a, int b)
{
	int i;

	i = a - b;

	return (i);
}

/**
 * op_mul - multilies two integers.
 * @a: first integer
 * @b: secomd integer.
 *
 * Return: The result of multiplication.
 */

int op_mul(int a, int b)
{
	int i;

	i = a * b;

	return (i);
}

/**
 * op_div - Divides two integers.
 * @a: The dividend.
 * @b: The divisor (non-zero).
 *
 * Return: The quotient of the division of a by b.
 */

int op_div(int a, int b);
{
	int i;

	i = a / b;

	return (i);
}

/**
 * op_mod - Computes the remainder of the division of two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	int i;

	i = a % b;

	return (i);
}
