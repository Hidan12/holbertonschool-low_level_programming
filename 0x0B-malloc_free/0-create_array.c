#include "main.h"
/**
 * *create_array - create array
 *
 * @size: pointer
 * @c: char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	if (size != 0)
	{
		ptr = malloc(sizeof(char) * size);
		for (a = 0; a <= size; a++)
			ptr[a] = c;
		return (ptr);
	}
	return ('\0');
}
