#include "main.h"
#include "stdlib.h"

/**
 * main - prints all arguments received.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: if not receive 2 arg, return 1
 */
int main(int argc, char *argv[])
{
	int pro;

	if (argc != 3)
		printf("Error\n");
	else
	{
	   pro	= (atoi(argv[1])) * (atoi(argv[2]));
		printf("%d\n", pro);
	}
	return (0);
}
