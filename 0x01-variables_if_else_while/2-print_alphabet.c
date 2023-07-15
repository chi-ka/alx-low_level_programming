#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	size_t i;
	char a;
	char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
			    'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
			    'u', 'v', 'w', 'x', 'y', 'z'};

	for (i = 0; i < sizeof(alphabets) / sizeof(alphabets[0]); i++)
	{
		a = alphabets[i];
		putchar(a);
	}
	putchar('\n');

	return (0);
}
