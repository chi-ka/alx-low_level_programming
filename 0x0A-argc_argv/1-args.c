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
	_putchar('0' + (argc - 1));
	_putchar('\n');
	argv++;

	return (0);
}
