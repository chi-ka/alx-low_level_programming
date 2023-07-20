#include <stdio.h>
#include "main.h"

/**
 * main - Entry point 
 * 
 * print_number - Prints numbers from 0-9 except 2 and 4
 */

void more_numbers(void)
{
	int i;
	int a = 0;
	
	for (a = 0; a < 10; ++a)
	{
                for (i = 0; i < 15; ++i)
		{
			if (i <= 9)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar(i/10 + '0');
				_putchar(i%10 + '0');
			}
		}
		_putchar('\n');
	}
}
