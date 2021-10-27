#include "main.h"
/**
 * **alloc_grid -  pointer to a 2 dimensional array of integers
 *
 * @width: size
 *
 * @height: size
 *
 * Return: Pointer.
 */
int **alloc_grid(int width, int height)
{
	int **ptr, a;

	if (!(width <= 0 || height <= 0))
	{
		ptr = (int **)malloc(width * sizeof(int *));
		for (a = 0; a < width; a++)
			ptr[a] = (int *)malloc(height * sizeof(int));
		return (ptr);
	}
	else
		return ('\0');
}
