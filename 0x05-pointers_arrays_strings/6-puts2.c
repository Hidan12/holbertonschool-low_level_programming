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
	int a;

	for (a = 0; str[a] != '\0'; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar(10);

}
