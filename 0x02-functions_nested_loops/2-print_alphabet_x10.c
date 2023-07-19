#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet from 'a' to 'z' ten times
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char i;

		for (i = 'a'; i <= 'z'; ++i)
		{
			putchar(i);
		}
		putchar('\n');
		++a;
	}
}
