#include "main.h"
/**
 * main - a program that prints its name, followed by \n
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; argv[i]; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			_putchar(argv[i][j]);
		}
		_putchar('\n');
	}
	return (0);
}
