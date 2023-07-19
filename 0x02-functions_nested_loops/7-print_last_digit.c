#include <stdio.h>
#include "main.h"

/**Write a function that prints the last digit of a number.
 * Prototype: int print_last_digit(int);
 * Returns the value of the last digit*/

int print_last_digit(int i)
{
	int Lastdigit;
	
	Lastdigit = i % 10;
	_putchar(Lastdigit);
}
