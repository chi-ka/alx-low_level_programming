#include <stdio.h>
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer to a pointer
 *
 * @to: Value to be changed
 */

void set_string(char **s, char *to)
{
	*s = to;
}
