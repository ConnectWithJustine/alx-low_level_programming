#include "main.h"
/**
 * _islower - a function that checks for lowercase
 * @c: single leter input
 * Return: if int c is lower return 1 else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
