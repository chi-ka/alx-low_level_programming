#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string provides
 *
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
