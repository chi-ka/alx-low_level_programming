#include <stdio.h>
#include "main.h"

/**
 * print_array - prints array 
 *
 * @a: array pointer
 *
 * @n: number to print
 */

void print_array(int *a, int n)
{
	int b, i;
	int temp, count = 1;

	for (i = 0; i < n; i++)
	{
		b = a[i];
		if (b < 0)
		{
			b = -b;
			putchar('-');
		}
		temp = b;
		while ((b / 10) != 0)
		{
			count *= 10;
			b /= 10;
		}
		b = temp;
		while (count != 0)
		{
			int digit = b / count;
			putchar('0' + digit);
			b %= count;
			count /= 10;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
}
