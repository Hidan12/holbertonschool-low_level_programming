
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num_asc, num_asc1, num_asc3;

	for (num_asc = 48; num_asc != 58; num_asc++)
	{
		for (num_asc1 = 48; num_asc1 <= 57; num_asc1++)
		{
			for (num_asc3 = (num_asc1 + 1); num_asc3 <= 57; num_asc3++)
			{
				putchar (num_asc);
				putchar (num_asc1);
				putchar (num_asc3);
					if  ((num_asc != 55) || (num_asc1 != 56) || (num_asc3 != 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar (10);
	return (0);
}

