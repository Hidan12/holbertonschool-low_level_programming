#include "main.h"
/**
 * puts_half - print
 * @str: char
 */
void puts_half(char *str)
{
	int a, b, mit;

	for (a = 0; str[a] != '\0'; a++)
		continue;
	if (a / 2 != 0)
		mit = (a + 1) / 2;
	else
		mit = (a / 2);
	for (b = mit; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar(10);
}
