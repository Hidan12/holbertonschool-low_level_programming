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
	int **ptr, a, b;

	if (!(width <= 0 || height <= 0))
	{
		ptr = (int **)malloc(width * sizeof(int *));
		if (ptr == NULL)
		{
			free(ptr);
			return ('\0');
		}
		for (a = 0; a < width; a++)
		{
			ptr[a] = (int *)malloc(height * sizeof(int));
			if (ptr[a] == NULL)
			{
				for (b = 0; b < width; b++)
				{
					free(ptr[b]);
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
			printf("%d\n", ptr[a][34]);
		}
		printf("%d\n", ptr[0][34]);
		return (ptr);
	}
	else
		return ('\0');
}
