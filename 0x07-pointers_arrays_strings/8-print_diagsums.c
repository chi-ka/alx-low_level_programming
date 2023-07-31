#include <stdio.h>
#include "main.h"

void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0;
	int sum_diag2 = 0;
	int num, numDigits, i, temp, mult;
	
	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + i];
		sum_diag2 += a[i * size + (size - 1 - i)];
	}
	numDigits = 0;
	temp = sum_diag1;
	while (temp != 0)
	{
		temp /= 10;
		numDigits++;
	}
	if (sum_diag1 == 0)
	{
		_putchar('0');
	}
	else
	{
		temp = sum_diag1;
		while (numDigits > 0)
		{
			mult = 1;
			for (i = 1; i < numDigits; i++)
			{
				mult *= 10;
			}
			num = temp / mult;
			temp %= mult;
			_putchar('0' + num);
			numDigits--;
		}
	}
	_putchar(',');
	_putchar(' ');
	numDigits = 0;
	temp = sum_diag2;
	while (temp != 0)
	{
		temp /= 10; 
		numDigits++;
	}
	if (sum_diag2 == 0)
	{
		_putchar('0');
	}
	else
	{
		temp = sum_diag2;
		while (numDigits > 0)
		{
			mult = 1;
			for (i = 1; i < numDigits; i++)
			{
				mult *= 10;
			}
			num = temp / mult;
			temp %= mult;
			_putchar('0' + num);
			numDigits--;
		}
	}
	_putchar('\n');
}
