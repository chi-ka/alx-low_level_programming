#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet from 'a' to 'z'
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while(a < 10)
	{
		int i;

		for (i = 'a'; i <= 'z'; ++i)
        	{
                	_putchar(i);
        	}
	_putchar('\n');
	++a;
	}
}
