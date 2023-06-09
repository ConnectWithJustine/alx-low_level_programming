#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that multiplies two numbers
* @argc: arguement count
* @argv: array of pointers to arguement strings
* Return: product esle 1
**/
int main(int argc, char **argv)
{
	int product;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	product = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", product);
	return (0);
}
