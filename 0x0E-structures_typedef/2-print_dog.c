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
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d.name == NULL)
			printf("Name: (nil)");
		else if (d.age == NULL)
			printf("Age: (nil)");
		else if (d.owner == NULL)
			printf("Owner: (nil)")
	}
}
