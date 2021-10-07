#include "main.h"
/**
 * print_square - show square
 *
 * @n: variable.
 */
void print_square(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
				_putchar(35);
			_putchar(10);
		}
	}
	_putchar(10);
}
