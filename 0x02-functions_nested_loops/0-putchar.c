#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	size_t i;
	char putchararray[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (i = 0; i < (sizeof(putchararray) / sizeof(putchararray[0])); i++)
	{
		putchar(putchararray[i]);
	}
	putchar('\n');

	return (0);
}

