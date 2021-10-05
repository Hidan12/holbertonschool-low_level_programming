#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 *
 * Return: 1 Is ok
 *
 * @n: go
 */

void print_to_98(int n)
{
	int cont;

	if (n < 98)
	{
		for (cont = n; cont <= 98; cont++)
		{
			printf("%d", cont);
			if (cont < 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (cont = n; cont >= 98; cont--)
		{
			printf("%d", cont);
			if (cont > 98)
				printf(", ");
		}
	}
	else
		printf("%d", n);
	printf("\n");
}

