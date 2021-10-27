#include "main.h"
/**
 * *create_array - create array
 *
 * @size: pointer
 * @c: char
 * Return: Pointer.
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	unsigned int a, size;

	for (size = 0; str[size] != '\0'; size++)
		continue;
	if (str[0] != NULL)
	{
		ptr = malloc(sizeof(char) * size);
		if (ptr == NULL)
			return ('\0');
		for (a = 0; a < size; a++)
		{
			ptr[a] = str[a];
		}
		return (ptr);
	}
	return ('\0');
}
