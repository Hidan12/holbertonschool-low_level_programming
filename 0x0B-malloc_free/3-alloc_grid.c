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
	int **ptr, a, b, c;

	if (!(width <= 0 || height <= 0))
	{
		ptr = (int **)malloc(width * sizeof(int *));
		if (ptr == NULL)
		{
			return ('\0');
		}
		for (a = 0; a <= width; a++)
		{
			ptr[a] = (int *)malloc(height * sizeof(int));
			if (ptr[a] == NULL)
			{
				for (c = 0; c <= a; c++)
				{
					free(ptr[c]);
				}
				free(ptr);
				return('\0');
			}
		}
		for (a = 0; a < width; a++)
		{
			for (b = 0; b < height; b++)
			{
				ptr[a][b] = 0;
			}
		}
		return (ptr);
	}
	else
		return ('\0');
}
