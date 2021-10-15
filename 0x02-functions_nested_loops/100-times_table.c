#include "main.h"
/**
 * print_times_table - Entry point
 *
 * @n: in ok
 *
 */

void print_times_table(int n)
{
	int a, b, result;

	if (n > 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				result = (a * b);
				if (result < 10)
				{
					_putchar('0' + result);
				}
				else
				{
					if (result < 100)
					{
						_putchar('0' + (result / 10));
						_putchar('0' + (result % 10));
					}
					else
					{
						_putchar('0' + (result / 100));
						_putchar('0' + ((result / 100) % 10));
	 					_putchar('0' + (result % 10));
					}
				}
				if (b < n)
				{
					if ((a * (b + 1)) < 10)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					else if ((a * (b + 1)) < 100)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
					}
					else
					{
						_putchar(44);
						_putchar(32);
					}
				}
			}
			_putchar(10);
		}
	}
	else
	{
		if (n == 0)
		{
			_putchar(48);
			_putchar(10);
		}
	}
}

