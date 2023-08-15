#include <stdio.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog instance.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the new dog instance, or NULL if memory allocation fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
