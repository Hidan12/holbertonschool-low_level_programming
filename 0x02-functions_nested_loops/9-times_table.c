#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: 1 Is ok
 *
 */

void times_table(void)
{
	int a, b, result;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			result = (a * b);
			if (result < 10)
				_putchar('0' + result);
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			_putchar(44);
			_putchar(32);
			_putchar(32);
		}
		_putchar(10);
	}
}

