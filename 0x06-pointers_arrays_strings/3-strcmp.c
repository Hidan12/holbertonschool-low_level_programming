#include "main.h"
/**
 * _strcmp - compare two pointers
 *
 * @s1: pointer1
 *
 * @s2: pointer2
 *
 * @n: amount
 *
 * Return: 0 if they are equal.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (s1 != s2)
			return (s1 - s1);
		s1++, s2++;
	}
	return(s1 - s2);
}
