#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two integers
 *
 * @n1: integer input
 *
 * @n2: integer input
 *
 * @r: char input
 *
 * @size_r: size of r
 *
 * Return: returns a char
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry, k = 0;
	int i = len1 - 1;
	int j = len2 - 1;
	int digit1, digit2, sum, len_r, m, temp;

	if (size_r <= len1 || size_r <= len2)
	{
		return (0);
	}
	while (i >= 0 || j >= 0 || carry != 0)
	{
		digit1 = (i >= 0) ? n1[i] - '0' : 0;
		digit2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = digit1 + digit2 + carry;
		r[k] = sum % 10 + '0';
		carry = sum / 10;
		i--;
		j--;
		k++;
	}
	len_r = k;
	for (m = 0; m < len_r / 2; m++)
	{
		temp = r[m];
		r[m] = r[len_r - m - 1];
		r[len_r - m - 1] = temp;
	}
	r[len_r] = '\0';
	return (r);
}
