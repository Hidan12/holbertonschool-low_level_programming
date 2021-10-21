#include "main.h"

/**
 * factorize_sqr - factor a number to get the square root
 *
 * @a: number to factor
 *
 * @count:counter that multiplies itself
 *
 * Return: count if it is the exact square root or - 1 if it is not.
 */

int factorize_sqr(int a, int count)
{
	if ((count * count) > a)
		return (-1);
	if ((count * count) == a)
		return (count);
	else
		return (factorize_sqr(a, (count + 1)));
}


/**
 * _sqrt_recursion -  natural square root
 *
 * @n: number
 *
 * Return: natural square root, if it is not natural - 1.
 */
int _sqrt_recursion(int n)
{
	return (factorize_sqr(n, 1));
}
