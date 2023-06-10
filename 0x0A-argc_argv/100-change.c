#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints the minimum number
* of coins to make change for an amount of money.
* @argc: arguement count
* @argv: array of pointers to arguement strings
* Return: cent else 1
**/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	int coinValues[] = {25, 10, 5, 2, 1};
	int numCoins = 0;

	for (int i = 0; i < sizeof(coinValues) / sizeof(coinValues[0]); i++)
	{
		numCoins += cents / coinValues[i];
		cents %= coinValues[i];
	}
	printf("%d\n", numCoins);
	return (0);
}

