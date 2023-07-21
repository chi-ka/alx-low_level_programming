#include <stdio.h>
#include "main.h"

/**
 * print_number - prints a number
 *
 * @n: input to the function
 */

void print_number(int n)
{
	int divisor = 1;
	int temp = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (temp >= 10)
	{
		divisor *= 10;
		temp /= 10;
	}
	while (divisor > 0)
	{

	       int digit = (n / divisor) % 10;

	       _putchar('0' + digit);
	       divisor /= 10;
	}
}
