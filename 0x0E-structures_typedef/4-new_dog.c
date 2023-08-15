#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _str_len - Calculate the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */

int _str_len(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * new_dog - Creates a new dog with given information
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the new dog, or NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int name_len = _str_len(name);
	int owner_len = _str_len(owner);
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * (name_len + 1));
	new_dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
	{
		new_dog->name[i] = name[i];
	}
	for (i = 0; i <= owner_len; i++)
	{
		new_dog->owner[i] = owner[i];
	}
	new_dog->age = age;

	return (new_dog);
}

