#include "main.h"

/**
 * _sqrt_recursion - a function that returns the square root of a number
 * @n: integer
 *
 * Return: n < 0 = -1
 */

int _sqrt_recursion(int n)
{
	if ((n == 1) || (n == 0))
		return (n);
	return (_sqrt_helper(n, n / 2));
}

/**
 * _sqrt_helper - a helping function
 * @i: integer
 * @guess: guessing number for square root
 *
 * Return: square root of n
 */
int _sqrt_helper(int i, int guess)
{
	if (guess * guess == i)
		return (guess);
	if (guess <= 0)
		return (-1);
			return (_sqrt_helper(n, guess - 1));
}
