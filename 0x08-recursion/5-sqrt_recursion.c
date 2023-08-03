#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion_helper - helper function
 *
 * @n: input value
 *
 * @start: value 0
 *
 * @end: input value
 *
 * Return: int
 */

int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid;
	int midSquare;

	if (start > end)
	{
		return (end);
	}
	mid = start + (end - start) / 2;
	midSquare = mid * mid;
	if (midSquare == n)
	{
		return (mid);
	}
	else if (midSquare > n)
	{
		return (_sqrt_recursion_helper(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_recursion_helper(n, mid + 1, end));
	}
}

/**
 * _sqrt_recursion - gets square root
 *
 * @n: the number to find squroot
 *
 * Return: an int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_recursion_helper(n, 0, n));
}
