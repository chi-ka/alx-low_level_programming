#include <stdio.h>

/**
 * print_name - Calls a function to print a name.
 * @name: Pointer to a character array containing the name.
 * @f: Pointer to a function that takes a char pointer as an argument.
 *
 * This function takes a name and a function pointer as parameters.
 * It then calls the provided function with the name as its argument.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
