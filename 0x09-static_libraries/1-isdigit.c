#include "main.h"
/**
 * _isdigit - check if input is digit
 * @c: string
 *
 * Return: true = 1, false = 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
