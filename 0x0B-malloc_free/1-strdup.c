#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 *
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if it fails.
 */

char *_strdup(char *str)
{
	size_t i;
	size_t len = 0;
	char *dup_str = (char *)malloc((len + 1) * sizeof(char));
	
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	if (dup_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dup_str[i] = str[i];
	}
	
	return (dup_str);
}
