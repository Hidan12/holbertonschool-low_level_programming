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
	char let, *ch = " \t\n,;.!\" (){}";
	int num_asc, pos, pos_c;

	for (pos = 0; a[pos] != '\0'; pos++)
	{
		num_asc = (char)a[pos];
		if (pos == 0 && (num_asc >= 97 && num_asc <= 122))
		{
			num_asc = (char)a[pos];
			let = (num_asc - 32);
			a[pos] = let;
		}

		for (pos_c = 0; ch[pos_c] != '\0'; pos_c++)
		{
			if (a[pos] == ch[pos_c] && (a[pos + 1] >= 97 && a[pos + 1] <= 122))
			{
				num_asc = (char)a[pos + 1];
				let = (num_asc - 32);
				a[pos + 1] = let;
			}
		}
	}
	return (a);
}
