#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints the minimum number
* of coins to make change for an amount of money.
* @argc: arguement count
* @argv: array of pointers to arguement strings
* Return: cent else 1
**/

int main(int argc, char **argv)
{
	int cent, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	coins = 0;
	if (cent > 25)
	{
		while (cent >= 25)
			cent -= 25, coins++;
	}
	if (cent > 10 && cent < 25)
	{
		while (cent >= 10)
			cent -= 10, coins++;
	}
	if (cent > 5 && cent < 10)
	{
		while (cent >= 5)
			cent -= 5, coins++;
	}
	if (cent > 2 && cent < 5)
	{
		while (cent >= 2)
			cent -= 2, coins++;
	}
	if (cent == 1 || cent == 2 || cent == 5 ||
	    cent == 10 || cent == 25)
	{
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
