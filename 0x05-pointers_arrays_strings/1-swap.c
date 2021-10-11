#include "main.h"
/**
 * swap_int - swap
 *
 * @a: pointer
 * @b: pointer.
 */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;

	*b = n;
}
