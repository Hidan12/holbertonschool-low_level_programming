#include "variadic_functions.h"
/**
 * print_all - print
 * @format: num of args, int
 *
 */
void print_all(const char * const format, ...)
{
	int pos = 0;
	char *b;
	va_list ap;

	va_start(ap, format);
	if (format != NULL)
	{
		while (format[pos])
		{
			switch (format[pos])
			{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				b = va_arg(ap, char *);
				if (b != NULL)
				{
					printf("%s", b);
					break;
				}
				printf("(nil)");
				break;
			default:
				pos++;
				continue;
			}
			printf(", ");
			pos++;
		}
	}
	printf("\n");
	va_end(ap);
}
