#include "main.h"
/**
 * print_triangle - show triangle
 *
 * @n: variable.
 */
void print_triangle(int n)
{
	int a, b, c = n, cor = 0;

	if (n >= 1)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				for (; c > 1; --c)
				{
					if (cor != 1)
						_putchar(32);
					else
						break;
				}
				c = (n - a);
				cor = 1;
				_putchar(35);
			}
			cor = 0;
			if (a <= n)
				_putchar(10);
		}
	}
	else
		_putchar(10);
}
