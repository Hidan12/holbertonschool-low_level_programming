#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free structure
 *
 * @d: structure at the function
 *
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
