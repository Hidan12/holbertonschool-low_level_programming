#include "main.h"
/**
 * print_sign - Entry point
 *
 * Return: 1 Is ok
 *
 * @n: go
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar(48);
	return (0);
}

