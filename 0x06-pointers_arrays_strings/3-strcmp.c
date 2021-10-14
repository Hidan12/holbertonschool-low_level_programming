#include "main.h"
/**
 * _strcmp - compare two pointers
 *
 * @s1: pointer1
 *
 * @s2: pointer2
 *
 * Return: 0 if they are equal.
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s1[a]);
		a++;
	}
	return(0);
}
