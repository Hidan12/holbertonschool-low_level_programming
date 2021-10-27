#include "main.h"
/**
 * *_strdup - copy array
 *
 * @str: string
 *
 * Return: Pointer.
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	unsigned int a, size;

	if (str != NULL)
	{
		for (size = 0; str[size] != '\0'; size++)
			continue;
		ptr = malloc(sizeof(char) * size);
		if (ptr == NULL)
			return ('\0');
		for (a = 0; a <= size; a++)
		{
			ptr[a] = str[a];
		}
		return (ptr);
	}
	return ('\0');
}
