#include <stdio.h>

/**
 * print_alphabet - Prints the lowercase alphabet from 'a' to 'z'
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}
	putchar('\n');
}
