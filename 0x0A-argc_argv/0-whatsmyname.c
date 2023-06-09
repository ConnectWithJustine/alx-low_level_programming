#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: exit(success)
 */

int main(int argc, char **argv)
{
	argc = argc;
	printf("%s\n", *argv);
	return (0);
}
