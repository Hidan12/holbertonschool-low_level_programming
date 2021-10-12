#include "main.h"
/**
 * puts2 - print
 *
 * @str: char
 *
 * Return: size of s.
 */
void puts2(char *str)
{
	int a, b;
	for(b = 0; str[b] != '\0'; a++)
		continue;
	b--;

	for (a = 0; a < b; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar(10);

}
