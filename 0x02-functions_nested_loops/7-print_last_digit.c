#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 *
 * @i:  Character to get the last digit
 *
 * Prototype: int print_last_digit(int);
 *
 * Return: the value of the last digit
 */

int print_last_digit(int i)
{
	int Lastdigit;

	Lastdigit = i % 10;
	_putchar(Lastdigit);
}
