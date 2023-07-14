#include <stdio.h>

/**
 * main - Entry point
 * C program that prints the size of various types
 * Return: Always 0 (Success)
 */

int main(void)

{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(float));
	printf("Size of long: %zu byte(s)\n", sizeof(long int));
	printf("Size of float: %zu byte(s)\n", sizeof(long long int));
	printf("Size of double: %zu byte(s)\n", sizeof(float));

	return (1);
}

