#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a char
 *
 * @c: input char
 *
 * Return: int
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
