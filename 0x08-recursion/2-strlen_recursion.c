#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - counts lenght of a string
 *
 * @s - string input
 *
 * Return: an integer count
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return(1 + _strlen_recursion(s + 1));
}
