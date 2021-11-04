#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - go from a number to a function
 * @array: elements to pass to the function
 * @size: number of elements
 * @cmp: function
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a, b;

	if (array && cmp && size > 0)
	{
		for (a = 0; a < size; a++)
		{
			b = cmp(array[a]);
			if (b != 0)
				return (a);
		}
		return (-1);
	}
	else
		return (-1);
}
