#include "main.h"
/**
 * *rot13 - encodes a string
 *
 * @s: string
 *
 * Return: the encode string
 */
char *rot13(char *s)
{
	char *p, *p1;
	int a, b;

	p = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	p1 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; p[b] != '\0'; b++)
		{
			if (s[a] == p[b])
			{
				s[a] = p1[b];
				break;
			}
		}
	}
	return (s);
}
