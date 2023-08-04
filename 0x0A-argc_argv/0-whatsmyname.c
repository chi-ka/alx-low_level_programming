#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a char
 *
 * @c: input char
 *
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
	char *t;
	int i;

	i = argc;
	t = argv[0];
	while (*t != '\0')
	{
		_putchar(*t);
		t++;
	}
	_putchar('\n');
	i++;

	return (0);
}
