#include <stdio.h>
#include "main.h"
#include <math.h> 
#include <stdbool.h>
#include <limits.h> 
int _atoi(const char* str)
{
    int result, sign;

    if (str == NULL)
    {
        return 0;
    }
    result = 0;
    sign = 1;
    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' || *str == '\f' || *str == '\v')
    {
        str++;
    }
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
    {
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        if (result > (INT_MAX - (*str - '0')) / 10)
	{
            return (sign == -1) ? INT_MIN : INT_MAX;
        }
        result = result * 10 + (*str - '0');
        str++;
    }

    return (result * sign);
}

/**
 * main - main function
 *
 * @argc: input argc count
 *
 * @argv: input array
 *
 * Return: int
 */

int main (int argc, char *argv[])
{
	int i, j, mul;
	char *a = "Error";

	if (argc != 3)
	{
		while (*a != '\0')
		{
			_putchar(*a);
			a++;
		}
		_putchar('\n');
		return (1);
	}
	i = _atoi(argv[1]);
	j = _atoi(argv[2]);
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	else if (j < 0)
	{
		_putchar('-');
		j = -j;
	}
	mul = i * j;
	_putchar(mul + '0');
	_putchar('\n');

	return (0);
}
