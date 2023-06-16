#include "main.h"
/**
 * is_positive_number - a function that validates a positive number
 * @str: string
 *
 * Return: 0 on success, else 1
 */
int is_positive_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * print_error_exit - a function that checks for an error and exits with status 98
 */
void print_error_exit(void)
{
	const char *error = "Error\n";
	int i = 0;

	while (error[i] != '\0')
	{
		putchar(error[i]);
		i++;
	}
	exit(98);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of pointers to argument strings
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error_exit();
	}
	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		print_error_exit();
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	int divisor = 10;
	int digit;
	int is_negative = 0;

	if (result < 0)
	{
		putchar('-');
		is_negative = 1;
		result *= -1;
	}

	while (result / divisor > 0)
		divisor *= 10;

	while (divisor > 1)
	{
		divisor /= 10;
		digit = result / divisor;
		result %= divisor;
		putchar(digit + '0');
	}

	putchar(result + '0');

	putchar('\n');

	return (0);
}
