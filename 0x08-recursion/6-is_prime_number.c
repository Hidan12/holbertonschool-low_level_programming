#include "main.h"

/**
 * check_prime - check number
 *
 * @a: number
 *
 * @count: counter
 *
 * Return: 1 if it is prime or 0 if the number is not prime.
 */

int check_prime(int a, int count)
{
	if (count == a)
		return (1);
	else if (a % count == 0)
		return (0);
	else
		return (check_prime(a, (count + 1)));
}


/**
 * is_prime_number -  prime
 *
 * @n: number
 *
 * Return: 1 if it is prime or 0 if the number is not prime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n % 2 == 0 && n != 2)
		return (0);
	return (check_prime(n, 2));
}
