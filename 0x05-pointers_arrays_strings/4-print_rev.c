#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in revertse
 *
 * @s: string provides
 *
 */

void print_rev(char *s)
{
	char *temp;
       
	temp = s;
	while (*s != '\0')
	{
		s += 1;
	}
	while (s != (temp-1))
	{
		_putchar(*s);
		s -= 1;
	}
	_putchar('\n');
}
