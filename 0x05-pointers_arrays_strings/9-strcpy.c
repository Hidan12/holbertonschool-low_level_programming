#include "main.h"
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
	return (dest);
}
