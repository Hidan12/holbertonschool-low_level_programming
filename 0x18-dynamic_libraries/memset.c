#include "main.h"
/**
 * *_memset - string to modify
 *
 * @s: string
 *
 * @b: character to add
 *
 * @n:how far to go
 *
 * Return: string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int tam, a;

	for (tam = 0; s[tam] != '\0'; tam++)
		continue;
	for (a = 0; n != 0; n--)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
