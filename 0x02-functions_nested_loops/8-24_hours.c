#include <stdio.h>
#include "main.h"

/** Print every minute of the life of Jack
 * Prototype: void jack_bauer(void);
 * You can listen to this soundtrack while coding :)
 */

void jack_bauer(void)
{
	int hour, minute;
	for (hour = 0; hour < 24; hour++) 
	{
		for (minute = 0; minute < 60; minute++)
		{
			putchar(hour / 10 + '0');
			putchar(hour % 10 + '0');
			putchar(':');
			putchar(minute / 10 + '0');
			putchar(minute % 10 + '0');
			putchar('\n');
		}
	}
}
