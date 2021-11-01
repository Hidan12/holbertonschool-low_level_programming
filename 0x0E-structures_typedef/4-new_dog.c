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
	if (name == '\0')
	{
		free(ptr);
		return(NULL);
	}
	if (owner == '\0')
	{
		free(ptr);
		return(NULL);
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return(ptr);
}
