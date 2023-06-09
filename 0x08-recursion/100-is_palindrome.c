#include "main.h"

/**
 * palind_helper - obtains length of a
 * @a: string
 * @l: integer to count length
 *
 * Return: On success 1 else -1
 */
int palind_helper(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palind_helper(a + 1, l + 1));
}
/**
 * palind_comp - compares string and string reverse
 * @a: string
 * @l: length
 *
 * Return: On success 1 else -1
 */

int palind_comp(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind_comp(a + 1, l - 2));
}
/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * @s: string
 *
 * Return: On succuss 1 else -1.
 */
int is_palindrome(char *s)
{
	int l;

	l = palind_helper(s, 0);
	return (palind_comp(s, l));
}
