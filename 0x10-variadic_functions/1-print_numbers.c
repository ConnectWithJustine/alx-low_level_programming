#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	int num;

	va_start(vlist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(vlist, int);
		print_number(num);

		if (separator != NULL && i != n - 1)
			print_separator(separator);
	}
	va_end(args);
	_putchar('\n');
}

/**
 * print_number - prints a number using _putchar.
 * @num: the number to be printed.
 */
void print_number(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * print_separator - Prints a separator string using _putchar.
 * @separator: The separator string to be printed.
 */
void print_separator(const char *separator)
{
	while (*separator)
	{
		_putchar(*separator);
		separator++;
	}
}
