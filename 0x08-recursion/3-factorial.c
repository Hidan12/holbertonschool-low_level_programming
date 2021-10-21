#include "main.h"
/**
 * factorial - size string
 *
 * @s: string
 *
 * Return: size
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
