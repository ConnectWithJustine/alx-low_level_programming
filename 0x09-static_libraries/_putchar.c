#include "main.h"
/**
 * _putchar - writes the charcter c to standard output
 * @c: String
 * Return: success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
