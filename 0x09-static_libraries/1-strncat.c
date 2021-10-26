#include "main.h"
/**
 * *_strncat - join two pointers
 *
 * @dest: pointer1
 *
 * @src: pointer2
 *
 * @n: amount
 *
 * Return: the union two pointer.
 */

char *_strncat(char *dest, char *src, int n)
{
	int tam_1, tam_2, i;

	for (tam_1 = 0; dest[tam_1] != '\0'; tam_1++)
		continue;
	for (tam_2 = 0; (src[tam_2] != '\0'); tam_2++)
		continue;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[tam_1 + i] = src[i];
	dest[tam_1 + i] = '\0';
	return (dest);
}
