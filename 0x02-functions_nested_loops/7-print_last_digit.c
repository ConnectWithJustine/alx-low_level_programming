#include "main.h"
/**
 * print_last_digit - a function that print last digit of a number
 *@ild: last digit result
 * Return: value of last digi
 */
int print_last_digit(int ild)
{
	int pld;

	pld = (ild % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar(pld + '0');
	return (pld);
}
