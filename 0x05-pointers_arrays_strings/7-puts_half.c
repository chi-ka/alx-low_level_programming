#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints the second half of string
 *
 * @str: input string
 */

void puts_half(char *str)
{
	int n;
	int length_of_string;
	char *temp = str;

	length_of_string = 0;
	while (*str != '\0')
	{
		length_of_string += 1;
		str++;
	}
	if (length_of_string % 2 ==  0)
	{
		n = length_of_string / 2;
	}
	else
	{
		n = ((length_of_string - 1) / 2);
	}
	temp += n;	
	while (*temp != '\0')
	{
		_putchar(*temp);
		temp += 1;
	}
	_putchar('\n');
}
