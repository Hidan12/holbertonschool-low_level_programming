#include "main.h"
/**
 * *string_toupper - convert to uppercase
 *
 * @a: pointer
 *
 * Return: pointer.
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
