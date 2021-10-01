#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num_asc;

	for (num_asc = 48; num_asc != 58; num_asc++)
	{
		putchar (num_asc);
		if (num_asc != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar (10);
	return (0);
}

