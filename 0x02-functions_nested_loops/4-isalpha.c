#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Return: 1 Is ok
 *
 * @c: go
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

