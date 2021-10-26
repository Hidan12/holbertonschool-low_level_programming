#include "main.h"
/**
 * _strstr - function locates the first occurrence in the string
 *
 * @haystack: string
 *
 * @needle: string to find
 *
 * Return: pointer to the byte in s that matches.
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b, ban, count;

	ban = 0;
	for (a = 0; haystack[a] != '\0'; a++)
	{
		count = a;
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[count + b] == needle[b])
				ban = 1;
			else
			{
				ban = 0;
				break;
			}
		}
		if (ban == 1 || needle[b] == '\0')
			return (&haystack[a]);
		a += b;
	}
	return ('\0');
}
