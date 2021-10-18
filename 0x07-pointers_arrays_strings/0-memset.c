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
char *_memset(char *s, char b, unsigned int n)
{
	int tam, a;

	for (tam = 0; s[tam] != '\0'; tam++)
		continue;
	for (a = 0; n != 0; n --)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
