#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * @n: the number to find the largest prime factor of
 *
 * Return: the largest prime factor
 */

int main(void)
{
	long n = 612852475143;
	long largest = -1;
	long i;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		largest = n;
	}
	printf("%ld\n",largest);

	return (0);
}
