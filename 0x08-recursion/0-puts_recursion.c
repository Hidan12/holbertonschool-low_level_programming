#include "main.h"
/**
 * _puts_recursion - print string
 *
 * @s: string
 *
 */
void _puts_recursion(char *s)
{
	if (*s == "")
		return (0);
	_putchar(*s);
	s++;
	if (*s != '\0')
		_puts_recursion(s);
	else
	{
		_putchar(10);
		return;
	}
}
