#include <stdio.h>

/**
 * main - Entry point
 * C program that prints exact word
 * Return: Always 0 (Success)
 */

int main(void)

{
	const char* out = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, out, sizeof(out) - 1);

	return (1);
}

