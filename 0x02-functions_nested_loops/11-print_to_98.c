#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98, regardless < 98 or > 98
 * @i: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int i)
{
	if (i < 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i++;
		}
	}
	else if (i > 98)
	{
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
