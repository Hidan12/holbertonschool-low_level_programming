#include "main.h"
/**
 * print_diagonal - show diagonal
 *
 * @n: variable.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(92);
			_putchar(47);
			if (a < (n - 1))
				_putchar(10);
		}
	}
	_putchar(10);
}
