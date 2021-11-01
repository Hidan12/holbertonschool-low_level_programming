#include "dog.h"
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
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
