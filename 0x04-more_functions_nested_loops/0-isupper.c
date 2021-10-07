#include "main.h"
/**
 * _isupper - check upper
 *
 * Return: 1 is c is uppercase
 *
 * @c: variable to check.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
