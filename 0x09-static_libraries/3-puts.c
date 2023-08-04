#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string provides
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 1;
	}
	_putchar('\n');
}
