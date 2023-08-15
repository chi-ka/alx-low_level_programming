#include <unistd.h>
#include <stdio.h>

/**
 * main - Writes a character to stdout
 *
 * Return: On success 1, on error -1 and errno is set appropriately.
 */

int main(void)
{
	char filename[] = __FILE__;
	int i = 0;

	while (filename[i] != '\0')
	{
		_putchar(filename[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

