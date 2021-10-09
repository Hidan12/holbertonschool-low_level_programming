#include "main.h"
/**
 * print_line - show line
 *
 * @n: variable.
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
			_putchar(45);
	}
	else if (n == 0)
		_putchar(10);
}
