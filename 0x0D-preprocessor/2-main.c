#include <unistd.h>

/**
 * main - Writes a character to stdout
 *
 * Return: On success 1, on error -1 and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

int main(void)
{
	char filename[] = __FILE__;
	int i = 0;

	while (filename[i] != '\0')
	{
		write(1,&(filename[i]),1);
		i++;
	}
	write(1, &('\n'), 1);

	return (0);
}
