#include "main.h"
/**
 * is_prime2 - function helper
 * @n: integer
 * @i: test number
 *
 * Return: on sucess 1
 */
int is_prime2(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime2(n, i + 1));
}

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: integer
 *
 * Return: if n = prime number, n = 1.
 */

int is_prime_number(int n)
{
	return (is_prime2(n, 2));
}
