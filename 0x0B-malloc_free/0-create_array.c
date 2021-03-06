#include "main.h"
/**
 * *create_array - create array
 *
 * @size: pointer
 * @c: char
 * Return: Pointer.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int a;

	if (size != 0)
	{
		ptr = malloc(sizeof(char) * size);
		if (ptr == NULL)
			return ('\0');
		for (a = 0; a < size; a++)
		{
			ptr[a] = c;
		}
		return (ptr);
	}
	return ('\0');
}
