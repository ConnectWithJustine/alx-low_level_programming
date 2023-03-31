#include "main.h"
/**
 * _isalpha - checks if charcter is alphabetic 'a - z || A - Z'
 * @c: take input from other functions.
 *
 * Return: (1) if c is true else (0)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
