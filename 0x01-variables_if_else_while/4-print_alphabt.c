#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	size_t i;
	char a = '\0';
	char b ='q';
	char c = 'e';
	char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',\
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	
	for(i = 0; i < (int)sizeof(alphabets)/sizeof(alphabets[0]); i++)
	{
		if(( alphabets[i] != b)&&(alphabets[i] != c))
		{
			a = alphabets[i];
			putchar(a);
		}
	}
	putchar('\n');

	return(0);
}
