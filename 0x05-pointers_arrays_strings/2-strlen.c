#include "main.h"
/**
 * _strlen - check the code
 *
 * @s: char
 *
 * Return: size of s.
 */
int _strlen(char *s)
{
	int a;

	for(a = 0; s[a] != '\0'; a++);
	return (a);
}
