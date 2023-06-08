#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: number
 *
 * Return: n < 0 = -1 else return 1
 */

int factorial(int n)
{
	if (n != 0)
		return (n * factorial(n - 1));
	if (n == 0)
		return (1);
	return (-1);
}
