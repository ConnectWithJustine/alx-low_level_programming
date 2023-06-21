#include "dog.h"
#include <strng.h>
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog.
 * @name: new dog name
 * @age: new dog age
 * @owner: dog owner
 * Return: pointer to the new dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	size_t name_len = strlen(name);
	size_t owner_len = strlen(owner);
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc((name_len + 1) * sizeof(char));
	new_dog->owner = malloc((owner_len + 1) * sizeof(char));
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
