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
	int a = 0, conv_1, conv_2;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		conv_1 = (int)s1[a];
		conv_2 = (int)s2[a];
		if (s1[a] != s2[a])
			return (conv_1 - conv_2);
		a++;
	}
	return(0);
}
