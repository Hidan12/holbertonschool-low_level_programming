#include "main.h"
/**
 * reverse_array - reverse
 *
 * @a: pointer1
 *
 * @n: amount
 *
 */

void reverse_array(int *a, int n)
{
	int b = 0, sus, c;

	n--;
	if (n % 2 != 0)
		c = (n + 1) / 2;
	else
		c = n / 2;
	for (; n >= c; n--)
	{
		sus = a[b];
		a[b] = a[n];
		a[n] = sus;
		b++;
	}
}
