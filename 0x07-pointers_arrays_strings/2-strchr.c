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
	if (c == '\0')
		return(0);
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
