#include <stdio.h>
#include <unistd.h>
#include "lists.h"

/**
 * pre_main - prints the required lines before main
 */

void pre_main(void) __attribute__((constructor));

void pre_main(void)
{
	char *line1 = "You're beat! and yet, you must allow,\nI bore my house upon my back\n";

	int i = 0;
	while (line1[i] != '\0')
	{
		_putchar(line1[i]);
		i++;
	}
}
