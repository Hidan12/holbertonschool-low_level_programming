#include "main.h"
/**
 * _islower - Entry point
 *
 * Return: 1 Is ok
 *
 * @c: go
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

