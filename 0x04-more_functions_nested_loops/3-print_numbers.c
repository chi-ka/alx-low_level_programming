#include <stdio.h>
#include "main.h"

/**
 * main - Entry point 
 * 
 * print_number - Prints numbers from 0-9
 */

void print_numbers(void)
{
	int i;
        
	for (i = '0'; i <= '9'; ++i)
	{
		_putchar(i);
	}
}
