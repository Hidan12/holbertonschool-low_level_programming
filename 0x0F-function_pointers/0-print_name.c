#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - pass the name as parameter
 * @name: name of the person
 * @f: Function pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
