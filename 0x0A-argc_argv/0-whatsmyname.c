#include <stdio.h>
#include "main.h"
#include <unistd.h>

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
