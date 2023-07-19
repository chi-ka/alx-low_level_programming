#include <stdio.h>
#include "main.h"

/**
 * print_fibonacci_numbers - prints the first 98 Fibonacci numbers
 *
 * @n - input integer
 */

void print_fibonacci_numbers(int n) 
{
    int fib_numbers[98];
    fib_numbers[0] = 1;
    fib_numbers[1] = 2;

    for (int i = 2; i < n; i++) 
    {
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
    }

    for (int i = 0; i < n; i++) 
    {
        int num = fib_numbers[i];
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
