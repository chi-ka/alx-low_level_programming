#include <stdio.h>

/** Main- Entry point */
/* more headers goes there */
/* betty style doc for function main goes there */
/* Return: Always 0 (Success);*/

int main(void)
{
	size_t i;
	char a;
	char Lowercase[] = {'a','b','c','d','e','f','g','h','i','j',\
		'k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char Uppercase[] = {'A','B','C','D','E','D','F','G','H','I','J','K','L','M','N','O','P',\
		'Q','R','S','T','U','V','W','X','Y','Z'};
	
	for(i = 0; i < (int)sizeof(Lowercase)/sizeof(Lowercase[0]); i++)
	{
		a = Lowercase[i];
		putchar(a);
	}
	for(i = 0; i < (int)sizeof(Uppercase)/sizeof(Uppercase[0]); i++)
        {
                a = Uppercase[i];
                putchar(a);
        }
	putchar('\n');

	return(0);
}
