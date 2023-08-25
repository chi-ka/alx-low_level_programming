#include <stdio.h>
#include <unistd.h>
#include "lists.h"

/**
 * pre_main - prints the required lines before main
 */

void pre_main(void)
{
	char *line1 = "You're beat! and yet, you must allow,\n";
	char *line2 = "I bore my house upon my back!\n";

	int i = 0;

	while (line1[i] != '\0')
	{
		_putchar(line1[i]);
		i++;
	}
	i = 0;
	while (line2[i] != '\0')
	{
		_putchar(line2[i]);
		i++;
	}
}
