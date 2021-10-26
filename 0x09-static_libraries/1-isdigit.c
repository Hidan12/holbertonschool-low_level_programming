#include "main.h"
/**
 * _isdigit - check digit
 *
 * Return: 1 is c is digt
 *
 * @c: variable to check.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
