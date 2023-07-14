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
	char alphabets[] = {'z', 'y', 'x', 'w', 'v' ,'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm',
		 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e','d', 'c', 'b', 'a'};
	
	for(i = 0; i < (int)sizeof(alphabets)/sizeof(alphabets[0]); i++)
	{
		a = alphabets[i];
		putchar(a);
	}
	putchar('\n');

	return(0);

}
