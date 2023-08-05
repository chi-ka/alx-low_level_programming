#include <stdio.h>
#include "main.h"

/**
 * main - main function
 *
 * @argc: input argc count
 *
 * @argv: input array
 *
 * Return: int
 */

int main (int argc, char *argv[])
{
	int i;
	int j;
	int mul;
	char *a = "Error";

	if (argc != 3)
	{
		while (*a != '\0')
		{
			_putchar(*a);
			a++;
		}
		_putchar('\n');
		return (1);
	}
	i = _atoi(argv[1]);
	j = _atoi(argv[2]);
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	else if (j < 0)
	{
		_putchar('-');
		j = -j;
	}
	mul = i * j;
	_putchar(mul + '0');
	_putchar('\n');

	return (0);
}
