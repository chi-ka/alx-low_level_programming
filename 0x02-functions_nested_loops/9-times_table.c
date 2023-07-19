#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints times table from 0 to 9
 *
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; ++a)
	{
		for (b = 0; b < 10; ++b)
		{
			int c;

			c = a * b;
			if (b < 9)
			{	
				if ((c ==  0) && (b == 0))
				{
					_putchar((c % 10) + '0' );
				}
				else if (c < 10)
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
