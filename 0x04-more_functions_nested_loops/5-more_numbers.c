#include "main.h"
/**
 * more_numbers - show the numbers.
 *
 */
void more_numbers(void)
{
	int a, b, res;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b < 10)
				res  = b;
			else
				res = b / 10;
			_putchar(res + '0');
			if (b > 10)
			{
				res = b % 10;
				_putchar(res + '0');
			}
		}
		_putchar(10);
	}
}
