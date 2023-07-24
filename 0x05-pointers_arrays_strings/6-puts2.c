#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints a string
 *
 * @str: string provides
 *
 */

void puts2(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(*str);
		}
		count += 1;
		str += 1;
	}
	_putchar('\n');
}
