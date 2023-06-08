#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x to the power of y
 * @x: base number
 * @y: power
 *
 * Return: y < 0 = -1 else 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
