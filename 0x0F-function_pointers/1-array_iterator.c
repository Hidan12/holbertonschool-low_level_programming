#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - go from a number to a function
 * @array: elements to pass to the function
 * @size: number of elements
 * @action: function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array && action)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
