#include <stdio.h>
#include "main.h"

/**
 * print_fibonacci_numbers - prints the first 98 Fibonacci numbers
 *
 * @n - input integer
 */

void print_fibonacci_numbers(int n) 
{

    int i;
    int fib_numbers[98];
    fib_numbers[0] = 1;
    fib_numbers[1] = 2;

    for (i = 2; i < n; i++) 
    {
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
    }

    for (i = 0; i < n; i++)
    int num; 
    {
        num = fib_numbers[i];
        while (num > 0) 
        {
            putchar('0' + (num % 10));
            num /= 10;
        }

        if (i < n - 1) 
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
}
