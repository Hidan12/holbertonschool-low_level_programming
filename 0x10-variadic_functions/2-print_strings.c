#include "variadic_functions.h"
/**
 * print_strings - print
 * @n: num of args, int
 * @separator: separator
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int a;
	char *b;
	va_list ptr;

	va_start(ptr, n);
	for (a = 0; a < (int) n; a++)
	{
		b = va_arg(ptr, char*);
		if (b == NULL)
		{
			printf("(nil)");
			break;
		}
		if  (a < (int)(n - 1) && separator != NULL)
			printf("%s%s", b, separator);
		else
			printf("%s", b);
	}
	printf("\n");
	va_end(ptr);
}
