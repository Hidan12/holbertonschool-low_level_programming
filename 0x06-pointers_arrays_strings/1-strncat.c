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
	int tam_1, tam_2, un;

	for (tam_1 = 0; dest[tam_1] != '\0'; tam_1++)
		continue;
	for (tam_2 = 0; (src[tam_2] != '\0'); tam_2++)
		continue;
	for (un = 0; dest[un + 1] != '\0' ; un++, tam_1++)
	{
		dest[tam_1] = src[un];
		if ((n > tam_2 && un == tam_2) || (n < tam_2 && un < n))
			break;
	}
	dest[tam_1] = '\0';
	return (dest);
}
