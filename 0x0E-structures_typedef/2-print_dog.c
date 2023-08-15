#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints information about a dog
 * @d: A pointer to a struct dog
 *
 * Description: Prints the name, age, and owner of the dog.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

