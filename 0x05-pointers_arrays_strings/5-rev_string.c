#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s - input string
 */

void rev_string(char *s)
{
	char temp;

	char *start = s;
	while (*s != '\0')
	{
		s += 1;
	}
	s -= 1;
	while (start < s)
	{
		temp = *start;
		*start = *s;
		*s = temp;
		start++;
	       	s--;
	}
}
