#include <stdio.h>
#include "main.h"

/**
 * wildcmp_helper - main string
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: int
 */

int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		while (*(s2 + 1) == '*')
		{
			s2++;
		}
		while (*s1 != '\0')
		{
			if (wildcmp_helper(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}
		return (wildcmp_helper(s1, s2 + 1));
	}

	if (*s1 == *s2 || *s2 == '?')
	{
		return (wildcmp_helper(s1 + 1, s2 + 1));
	}

	return (0);
}

/**
 * wildcmp - compare strings
 *
 * @s1: first string
 *
 * @s2 : second string
 *
 * Return: int output
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
