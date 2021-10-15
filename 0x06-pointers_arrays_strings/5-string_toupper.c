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
char *string_toupper(char *a)
{
	char let;
	int num_asc, pos;

	for (pos = 0; a[pos] != '\0'; pos++)
	{
		num_asc = (char)*a;
		if (num_asc <= 122 && num_asc >= 97)
		{
			let = (num_asc - 32);
			*a = let;
		}
	}
	return (a);
}
