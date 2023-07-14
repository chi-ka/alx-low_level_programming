#include <stdio.h>

/** Main- Entry point
 *
 *
 * Return: Always 0 (Success);*/

int main(void)
{
	int i = 0;
	
	while(i < 16)	
	{
		if(i < 10)
		{
			putchar(i + '0');
			i++;
		}
		else
		{
			putchar('a' + (i - 10));
			i++;
		}
	}
	putchar('\n');

	return(0);
}
