#include "main"
/**
 * _islower - function to check if check if character is in lowercase
 * @c: string
 *
 * Return: (1) if c is true else (0)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
