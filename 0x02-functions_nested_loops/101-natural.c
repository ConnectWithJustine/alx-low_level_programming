#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum, temp;

	for (count = 0; count < 50; count++)
	{
		sum += fib2;
		temp = fib1 + fib2;

		fib1 = fib2;
		fib2 = temp;
	}
	printf("%lu", sum);

	return (0);
}
