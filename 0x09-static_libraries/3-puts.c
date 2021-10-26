#include "main.h"
/**
 * _puts - print
 *
 * @str: char
 *
 * Return: size of s.
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar(10);
}
