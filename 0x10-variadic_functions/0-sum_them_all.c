#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: numer of arg
 * Return: if n == 0 : 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(vlist, n);

	for (i = 0; i < n; i++);
	sum += va_arg(vlist, int);

	va_end(vlist);

	return (sum);
}
