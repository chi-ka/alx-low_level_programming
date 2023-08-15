#include <unistd.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int len = 0;
	
	while (s[len] != '\0')
	{
		len++;
	}
	
	return (len);
}

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 */

void _putchar(char c)
{
    write(1, &c, 1);
}

/**
 * _puts - Writes a string to stdout.
 * @str: The string to write.
 */

void _puts(char *str)
{
    write(1, str, _strlen(str));
}

/**
 * print_dog - Prints the content of a struct dog.
 * @d: Pointer to the struct dog to be printed.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			_puts("Name: ");
			_puts(d->name);
		}
		else
		{
			_puts("Name: (nil)");
		}
        	_putchar('\n');
        	_puts("Age: ");
        	_putchar('0' + (d->age));
        	_putchar('\n');

        	if (d->owner != NULL)
        	{
            		_puts("Owner: ");
            		_puts(d->owner);
        	}
        	else
		{
            		_puts("Owner: (nil)");
		}
		_putchar('\n');
	}
}
