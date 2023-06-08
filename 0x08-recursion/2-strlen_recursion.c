#include "main.h"

/**
 * _strlen_recursion- a function that returns the length of a string
 * @s: string
 * 
 * return: on success 1 else -1
 */
int _strlen_recrsion (char *s)
{
	if (*s != 0)
	{
		return (1 + _strlen_recusion (s + 1))
	}
	return (0);
}
