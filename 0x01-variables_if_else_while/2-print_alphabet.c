#include <stdio.h>

/* Main- Entry point */
/* more headers goes there */
/* betty style doc for function main goes there */
/* Return: Always 0 (Success);*/

int main(void)
{
	size_t i;
	char a;
	char alphabets[] = {'a','b','c','d','e','f','g','h','i','j',\
		'k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	for(i = 0; i < (int)sizeof(alphabets)/sizeof(alphabets[0]); i++)
	{
		a = alphabets[i];
		putchar(a);
		putchar('\n');
	}

	return(0);

}
