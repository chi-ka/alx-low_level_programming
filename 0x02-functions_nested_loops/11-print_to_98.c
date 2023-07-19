#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 *
 * @n: The starting number.
 */

void print_to_98(int n)
{
	int i;
	int temp; 

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			temp = i;
			int tempCopy;
			int numDigits;

			if (i != n)
			{
				putchar(',');
				putchar(' ');
			}

			if (temp < 0)
			{
				temp = -temp;
				putchar('-');
			}

			numDigits = 0;
			tempCopy = temp;
			while (tempCopy != 0)
			{
				tempCopy /= 10;
				numDigits++;
			}

			if (temp == 0)
				putchar('0');
			else
			{
				while (numDigits > 0)
				{
					int digit = temp % 10;
					putchar('0' + digit);
					temp /= 10;
					numDigits--;
				}
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			int tempCopy;
                        int numDigits;
			int digit

			if (i != n)
			{
				putchar(',');
				putchar(' ');
			}

			temp = i;
			if (temp < 0)
			{
				temp = -temp;
				putchar('-');
			}

			numDigits = 0;
			tempCopy = temp;
			while (tempCopy != 0)
			{
				tempCopy /= 10;
				numDigits++;
			}

			if (temp == 0)
				putchar('0');
			else
			{
				while (numDigits > 0)
				{
					digit = temp % 10;
					putchar('0' + digit);
					temp /= 10;
					numDigits--;
				}
			}
		}
	}

	putchar('\n');
}
