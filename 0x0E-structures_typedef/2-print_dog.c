#include "dog.h"
#include <stdio.h>
/**
 * init_dog - dog attributes
 *
 * @d: structure at the function
 *
 * @name: dog's name
 *
 * @age: dog's age
 *
 * @owner: dog's owner name
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
