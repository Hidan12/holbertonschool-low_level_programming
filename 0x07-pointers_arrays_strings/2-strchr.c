#include "main.h"
/**
 * *_strchr - character finder in a string
 *
 * @s: string
 *
 * @c: character
 *
 * Return: the string from where the character is found.
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (*(s + a));
	}
	return (*(s + a));
}
