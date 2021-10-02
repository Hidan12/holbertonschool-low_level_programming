#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num_asc_1, num_asc_2, num_asc_3;

	for (num_asc_1 = 48; num_asc_1 < 58; num_asc_1++)
	{
		for (num_asc_2 =+ num_asc_1; num_asc_2 < 58; num_asc_2++)
		{
			for (num_asc_3 =+ num_asc_2; num_asc_3 < 58; num_asc_3++)
			{
				if (num_asc_2 != num_asc_3 && num_asc_1 != num_asc_2)
				{
					putchar(num_asc_1);
					putchar(num_asc_2);
					putchar(num_asc_3);
					if ((num_asc_1 =! 55) && (num_asc_2 != 56) && (num_asc_3 != 57))
					{
					putchar(44);
					putchar(32);
					}
				}
			}
		}
	}
	putchar (10);
	return (0);
}

