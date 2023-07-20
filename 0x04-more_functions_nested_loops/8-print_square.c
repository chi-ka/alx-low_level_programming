#include <stdio.h>
#include "main.h"

/**
 * Main - Entry Point
 * 
 * print_square- print square the size of n
 * 
 * @n - size of square line
 */

void print_square(int size)
{
	int i;
	int j;

	if (size >= 1)
	{
		for(i = 0; i < size; ++i)
		{
			for(j = 0;  j < size; ++j)
			{
				putchar('#');
			}
		putchar('\n');
		}
	}
}
