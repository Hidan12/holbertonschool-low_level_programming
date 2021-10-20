#include "main.h"
/**
 * *_strpbrk - function locates the first occurrence in the string
 *
 * @s: string
 *
 * @accept: character
 *
 * Return: pointer to the byte in s that matches.
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	for (; *s != '\0'; s++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (*s == accept[a])
				return (s);
		}
	}
	return (0);
}
