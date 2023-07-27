#include <stdio.h>
#include "main.h"

/**
 * print_number - prints a number
 *
 * @n: input number
 */

void print_number(int n)
{
	int d = 1;
	int tmp = n;

	if (n < 0)
	{
		_putchar('-');
		tmp = n = -n;
	}
	while (tmp > 9)
	{
		tmp /= 10;
		d *= 10;
	}
	while (d != 0)
	{
		_putchar(n / d + '0');
		n %= d;
		d /= 10;
	}
}
