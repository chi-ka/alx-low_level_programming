#include <stdio.h>
#include <unistd.h>

/**
 * main - Writes a character to stdout
 *
 * Return: On success 1, on error -1 and errno is set appropriately.
 */

int main(void)
{
	int _putchar(char c);
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

int _putchar(char c)
{
    return write(1, &c, 1);
}
