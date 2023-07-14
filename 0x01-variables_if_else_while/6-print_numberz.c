#include <stdio.h>

/* Main- Entry point */
/* more headers goes there */
/* betty style doc for function main goes there */
/* Return: Always 0 (Success);*/

int main(void)
{
	int i = 0;
	
	while(i < 10)	
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return(0);
}
