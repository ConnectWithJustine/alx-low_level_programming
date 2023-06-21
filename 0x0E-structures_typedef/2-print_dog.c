#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: pointer tor struct
 */

void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	if (!d->name)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %.2f\n", d->age);
	if (!d->owner)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
