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
	int num_asc, pos, pos_1, cont = 0;

	for (pos = 0; a[pos] != '\0'; pos++)
	{
		num_asc = (char)a[pos];
		if ((cont == 0 || a[pos - 1] == ' ' || a[pos - 1] == '.')
		    && (num_asc <= 122 && num_asc >= 97))
		{
			cont = 1;
			let = (num_asc - 32);
			a[pos] = let;
		}
		else if (a[pos] == 92 && (a[pos + 1] == 'n' || a[pos + 1] == 't'))
		{
			cont = 0;
			if (a[pos + 1] == 'n')
				a[pos] = 10;
			else
				a[pos] = ' ';
			for (pos_1 = (pos + 1); a[pos_1] != '\0'; pos_1++)
				a[pos_1] = a[pos_1 + 1];
			a[pos_1 + 1] = '\0';
		}
	}
	return (a);
}
