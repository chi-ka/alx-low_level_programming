#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * C program that prints exact word
 * Return: Always 0 (Success)
 */

int main(void)

{
	const char\* out = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(out, sizeof(char), strlen(out), stderr);

	return (1);
}

