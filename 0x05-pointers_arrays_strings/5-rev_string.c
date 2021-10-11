#include "main.h"
/**
 * rev_string - print
 *
 * @str: char
 *
 */
void rev_string(char *str)
{
	int a, b;

	for (a = 0; str[a] != '\0'; a++)
		continue;
	a--;
	for (b = a; str[b] != '\0'; b--)
	{
		_putchar(str[b]);
	}
	_putchar(10);

}
