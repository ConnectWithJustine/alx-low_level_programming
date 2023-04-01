#include "main.h"
/**
 * _putchar - writes a charcter to stdout
 * @c; the character to print
 *
 * Return: on succes 1
 * on error, -1 is returned, and errno is set appropriatly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
