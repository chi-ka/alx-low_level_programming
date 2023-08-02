#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_helper - helps main function
 *
 * @s: word to check
 *
 * @start: start of the word
 *
 * @end: end of the word
 *
 * Return: int
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a word is a palandrome
 *
 * @s: string to check the word
 *
 * Return: returns an int
 */

int is_palindrome(char *s)
{
	int length;

	length = strlen(s);

	if (length <= 1)
	{
		return (1);
	}

	return (is_palindrome_helper(s, 0, length - 1));
}
