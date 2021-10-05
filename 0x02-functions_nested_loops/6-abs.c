#include "main.h"
/**
 * _abs - Entry point
 *
 * Return: 1 Is ok
 *
 * @c: go
 */

int _abs(int c)
{
	if (c < 0)
		c = c * -1;
	return (c);
}

