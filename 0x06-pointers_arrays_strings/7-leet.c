#include "main.h"
/**
 * leet - encodes a string
 *
 * @s: string
 *
 * Return: the encode string
 */
char *leet(char *s)
{
	char *car = "a4e3o0t7l1";
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; car[b] != '\0'; b += 2)
		{
			if (s[a] == car[b] || s[a] == (car[b] - 32))
			{
				s[a] = car[b + 1];
				break;
			}
		}
	}
	return (s);
}
