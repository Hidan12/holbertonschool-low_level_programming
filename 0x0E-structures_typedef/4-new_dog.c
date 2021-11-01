#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strcpy - swap
 *
 * @src: pointer
 *
 * @dest: pointer
 *
 * Return: pointer.
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
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
        ptr->name = malloc(sizeof(name));
	if (ptr->name != NULL)
	{
		ptr->name = _strcpy( ptr->name, name);
	}
	else
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(owner));
	if (ptr->owner != NULL)
	{
		ptr->owner = _strcpy( ptr->owner, owner);
	}
	else
	{
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	ptr->age = age;
	return(ptr);
}
