#include "main.h"
/**
 * swap_int - swap
 *
 * @size: pointer
 * @c: pointer.
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
