#include "main.h"
/**
 * print_diagonal - show diagonal
 *
 * @n: variable.
 */
void print_diagonal(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
			_putchar(32);
		_putchar(47);
	}
	_putchar(10);
}
