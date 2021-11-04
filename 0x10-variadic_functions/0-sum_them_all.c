#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: num of args, int
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int b = 0, a;
	va_list ptr;

	va_start(ptr, n);
	for (a = 0; a < (int) n; a++)
		b += va_arg(ptr, int);
	va_end(ptr);
	return (b);
}
