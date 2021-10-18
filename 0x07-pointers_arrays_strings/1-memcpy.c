#include "main.h"
/**
 * *_memcpy -union two pointer
 *
 * @dest: pointer1
 *
 * @src: pointer2
 *
 * @n: how far to go
 *
 * Return: the union two pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	int a;

	for (a = 0; n != 0; n--)
	{
		*d = src[a];
		d++;
		a++;
	}
	return (dest);
}
