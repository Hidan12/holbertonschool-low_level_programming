#include "main.h"
/**
 * print_alphabet_x10 - print * 10
 *
 */

void print_alphabet_x10(void)
{
	int count;
	char let;

	for (count = 0; count < 10; count++)
	{
		for (let = 'a' ; let <= 'z'; let++)
		{
			_putchar(let);
		}
		_putchar(10);
	}
}

