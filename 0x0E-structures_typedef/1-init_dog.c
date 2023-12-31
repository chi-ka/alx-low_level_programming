#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
