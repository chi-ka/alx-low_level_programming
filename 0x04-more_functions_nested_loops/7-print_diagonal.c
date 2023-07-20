#include <stdio.h>
#include "main.h"

/**
 * Main - Entry Point
 * 
 * print_diagonal- print diagonal line the length of n
 * 
 * @n - length of diagonal line
 */

void print_diagonal(int n)
{
	int i;
	int j;
	
	if (n >= 1)
	{
		for(i = 1; i <= n; ++i)
		{
			for(j = 1;  j< i; ++j)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
