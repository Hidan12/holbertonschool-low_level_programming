#include "variadic_functions.h"
/**
 * print_numbers - print
 * @n: num of args, int
 * @separator: separator
 *
 * Return: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int a, b;
	va_list ptr;

	va_start(ptr, n);
	for (a = 0; a < (int) n; a++)
	{
		b = va_arg(ptr, int);
		if  (a < (int)(n - 1) && separator != NULL)
			printf("%d%s", b, separator);
		else
			printf("%d", b);
	}
	printf("\n");
	va_end(ptr);
}
