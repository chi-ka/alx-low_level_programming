#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints times table of integer @n
 *
 * @n - the integer whose times table is printed
 *
 */

void print_times_table(int n)
{
	int i;
	int b;
	
	for (i = 0; i <= n ; ++i)
	{
		for (b = 0; b <= n; ++b)
		{
			int c;

                        c = i * b;
                        if (b < 9)
                        {
                                if (c < 10)
                                {
                                        _putchar(' ');
                                        _putchar((c % 10) + '0' );
                                }
                                else
                                {
                                        _putchar((c / 10) + '0');
                                        _putchar((c % 10) + '0');
                                }
                                _putchar(',');
                                _putchar(' ');
                        }
                        else
                        {
                                if (c < 10)
                                {
                                        _putchar(' ');
                                        _putchar((c % 10) + '0');
                                }
                                else
                                {
                                        _putchar((c / 10) + '0');
                                        _putchar((c % 10) + '0');
                                }
                        }
                }
                _putchar('\n');
        }
}
