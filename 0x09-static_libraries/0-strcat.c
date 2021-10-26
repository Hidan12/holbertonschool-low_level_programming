#include "main.h"
/**
 * *_strcat - join two pointers
 *
 * @dest: pointer1
 *
 * @src: pointer2
 *
 * Return: the union two pointer.
 */
char *_strcat(char *dest, char *src)
{
	int tam_1, tam_2;

	for (tam_1 = 0; dest[tam_1] != '\0'; tam_1++)
		continue;
	for (tam_2 = 0; src[tam_2] != '\0'; tam_2++, tam_1++)
		dest[tam_1] = src[tam_2];
	return (dest);
}
