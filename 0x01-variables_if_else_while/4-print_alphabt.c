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

	for (num_asc = 97; num_asc != 123; num_asc++)
	{
		if (num_asc != 113 && num_asc != 101)
			putchar (num_asc);
	}
	putchar (10);
	return (0);
}

