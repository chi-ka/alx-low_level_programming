#include <stdio.h>
#include "main.h"

/**
 * _abs - Write a function that computes the absolute value of an integer.
 * 
 * Prototype: int _abs(int);
 *
 * @i: the character which we are to get the absolute value of
 *
 * Return: absolute value of @n
 */

int _abs(int i)
{
	if(i > 0)
	{
		return(i);
	}
	else if (i < 0)
	{
		i = i * -1;
		return(i);
	}
	else
	{
		return(0);
	}
}
