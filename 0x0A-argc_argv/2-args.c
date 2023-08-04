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

int main(int argc, char *argv[])
{
	char *t;
	int i;

	for (i = 0; i < argc; i++)
	{
		t = argv[i];
		while (*t != '\0')
		{
			_putchar(*t);
			t++;
		}
		_putchar('\n');
	}

	return (0);
}
