#include "main.h"
/**
 * *cap_string - convert to uppercase
 *
 * @a: pointer
 *
 * Return: pointer.
 */
char *cap_string(char *a)
{
	char let;
	int num_asc, pos;

	for (pos = 0; a[pos] != '\0'; pos++)
	{
		num_asc = (char)a[pos];
		if ((pos == 0 || a[pos - 1] == ' ' || a[pos - 1] == '.')
		    && (num_asc <= 122 && num_asc >= 97))
		{
			let = (num_asc - 32);
			a[pos] = let;
		}
		else if (a[pos - 1] == '\n')
		{
			let = (num_asc - 32);
			a[pos] = let;
		}
		else if (a[pos] == '\t')
			a[pos] = ' ';
	}
	return (a);
}
