#include "dog.h"
#include <stdio.h>
/**
 * free_dog - free structure
 *
 * @d: structure at the function
 *
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
