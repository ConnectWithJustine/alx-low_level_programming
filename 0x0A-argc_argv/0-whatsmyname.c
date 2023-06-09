#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: exit(success)
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
