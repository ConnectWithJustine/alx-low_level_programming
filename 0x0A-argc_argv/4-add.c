#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - a program that adds positve numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int x;
	int y;
	int add;

	(void)argv;
	add = 0;
	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (!isdigit(argv[x][y]))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[x]);
		}
	}
	printf("%d\n", add);
	return (0);
}
