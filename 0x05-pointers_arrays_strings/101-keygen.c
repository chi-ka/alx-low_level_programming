#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * generate_random_char - generate_random_character
 *
 * Return: a charcter
 */

char generate_random_char()
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int index = rand() % (sizeof(charset) - 1);
	return charset[index];
}

/**
 * generate_password - generate password
 * 
 * @password - password pointer
 *
 * @lenght - lenght of password
 */

void generate_password(char *password, int length)
{
	for (int i = 0; i < length; i++)
	{
		password[i] = generate_random_char();
	}
	password[length] = '\0';
}
