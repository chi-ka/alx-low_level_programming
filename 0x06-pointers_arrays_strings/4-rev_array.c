#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses arrays
 *
 * @a: the array to be reversed
 *
 * @n: the number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int b[1000];
	int i;
	int j;

	j = n;
	for (i = 0; n > 0; n--)
	{
		b[i] = *(a + (n-1));
		i++;
	}
	for (i = 0; i < j; i++)
	{
		a[i] = b[i];
	}
}	
