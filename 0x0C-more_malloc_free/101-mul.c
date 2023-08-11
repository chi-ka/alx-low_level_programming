#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0-9).
 *
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, otherwise 0.
 */

int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] != '\0')
	{
		if (!_isdigit(s[i]))
		{
			_putchar('E');
			_putchar('r');
			_putchar('r');
			_putchar('o');
			_putchar('r');
			_putchar('\n');
			exit(98);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}

/**
 * _print_number - Prints an integer to standard output.
 *
 * @n: The integer to be printed.
 */

void _print_number(int n)
{
	char digit;
	int divisor = 1;

	while (n / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		digit = '0' + n / divisor;
		_putchar(digit);
		n %= divisor;
		divisor /= 10;
	}
}

/**
 * main - Entry point of the program.
 *
 * @argc: The number of command-line arguments.
 *
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, 98 on error.
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('0');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	_print_number(num1 * num2);
	_putchar('\n');

	return (0);
}
