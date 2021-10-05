#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: 1 Is ok
 *
 */

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b < 60; b++)
		{
			_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
			_putchar(58);
			_putchar('0' + (b / 10));
			_putchar('0' + (b % 10));
			_putchar(10);
		}
	}
}

