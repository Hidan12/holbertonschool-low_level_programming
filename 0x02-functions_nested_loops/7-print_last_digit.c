#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * Return: 1 Is ok
 *
 * @n: go
 */

int print_last_digit(int n)
{
	if (n ==  0)
	{
		_putchar(48);
		return (48);
	}
	else if (n < 0)
		n = n * -1;
	n = n % 10;
	n = n + 48;
	_putchar(n);
	return (n);
}

