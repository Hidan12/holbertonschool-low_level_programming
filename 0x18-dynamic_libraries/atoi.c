#include "main.h"
/**
 * _atoi - swap
 *
 * @a: pointer
 */
int _atoi(char *s)
{
	int can_num, tam_ar, a, pru, b, num, num_f;

	for (tam_ar = 0; s[tam_ar] != '\0'; tam_ar++)
	{
		pru = (char)s[tam_ar];
		if (pru >= 48 && pru <= 57)
			can_num++;
	}
	if (can_num > 1)
	{
		for(a = 0; a < tam_ar; a++)
		{
			pru = (char)s[tam_ar];
			if (pru >= 48 && pru <= 57)
			{
				num = (s[tam_ar] - '0');
				for(b = 0; b <= can_num; b++)
				{
					num *= 10;
				}
				num_f += num;
			}
		}
	}
	return (num_f);
}
