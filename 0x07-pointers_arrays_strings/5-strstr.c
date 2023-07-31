#include <stdio.h>
#include "main.h"
#include <stdbool.h>

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return haystack;
	}
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;
		bool found = true;
		
		while (*n)
		{
			if (*h != *n)
			{
				found = false;
				break;
			}
			h++;
			n++;
		}
		if (found)
		{
			return (haystack);
		}
		haystack++;
	}
	
	return (NULL);
}

