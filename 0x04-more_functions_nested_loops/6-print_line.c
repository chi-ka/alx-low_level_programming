#include <stdio.h>
#include "main.h"

/**
 * main - Entry point 
 *
 * @n: the number of times to draw the line
 *
 * print_diagonal  - Prints a straight line
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n -= 1;
	}
	_putchar('\n');
}
