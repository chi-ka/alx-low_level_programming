#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitilizes all words
 *
 * @a: input char string
 *
 * Return: an input string
 */

char *cap_string(char *a)
{
	char *original = a;
	
	while (*a != '\0')
	{
		if (*a == ' ' || *a == '\t' || *a == '\n')
		{
			if ((*(a + 1) >= 'a') && (*(a + 1) <= 'z'))
			{
				*(a + 1) -= 32;
			}
		}
                a++;
        }
        
	return (original);	
}
