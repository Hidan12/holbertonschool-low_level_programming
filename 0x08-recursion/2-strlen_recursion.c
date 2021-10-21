#include "main.h"
/**
 * _strlen_recursion - size string
 *
 * @s: string
 *
 * Return: size
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != '\0')
	{
		a += _strlen_recursion(s + 1);
		return (a += 1);
	}
	else
		return (0);
}
