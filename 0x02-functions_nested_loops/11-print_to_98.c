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
		for (cont = n; n == 98; cont++)
			printf("%d, \n", cont);
	}
	else if (n > 98)
	{
		for (cont = n; n == 98; cont--)
			printf("%d, \n", cont);
	}
	else
		printf("%d\n", n);
}

