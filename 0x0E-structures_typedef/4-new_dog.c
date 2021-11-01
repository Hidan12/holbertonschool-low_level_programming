#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - print dog attributes
 *
 * @d: structure at the function
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return(NULL);
	if (name == NULL)
	{
		free(ptr);
		free(name);
		return(NULL);
	}
	if (owner == NULL)
	{
		free(ptr);
		fre(owner);
		return(NULL);
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return(ptr);
}
