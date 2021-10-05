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
	int cv;

	if (n ==  0)
	{
		_putchar(48);
		return (n);
	}
	else if (n < 0)
	{
		n = n % 10;
		n = -n;
		cv = (n + '0');
		_putchar(cv);
		return (n);
	}
	n = n % 10;
	_putchar(n + 48);
	return (n);
}

