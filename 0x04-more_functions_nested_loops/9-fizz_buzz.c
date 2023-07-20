#include <stdio.h>
#include "main.h"

/**
 * Main - Entry Point
 * 
 * fizz_buzz - print fizz buzz
 */

int main(void)
{
	int i;
	for(i = 1; i <= 100; ++i)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			putchar('F');
			putchar('I');
			putchar('Z');
			putchar('Z');
			putchar('B');
			putchar('Z');
			putchar('Z');
			putchar('Z');
		}
		else if ((i % 3) == 0)
		{
			putchar('F');
			putchar('I');
			putchar('Z');
			putchar('Z');
		}
		else if ((i % 5) == 0)
		{
			putchar('B');
			putchar('U');
			putchar('Z');
			putchar('Z');
		}
		else
		{
			if (i < 9)
			{
				putchar(i + '0');
			}
			else
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
			}
		}
		putchar(' ');
	}
	putchar('\n');
	return(0);
}
