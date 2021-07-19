#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculate the length of an array
 * @str: array to calculate length
 * Return: length
*/

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}
	return (i);

}

/**
 * new_dog - initialize a variable of type dog_t
 * @name: pointer to an char string
 * @age: float value numbre
 * @owner: pointer to an char string
 * Return: pointer to a new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *inner_dog;
	int i, size_name, size_owner;
	char *inner_name, *inner_owner;

	inner_dog = malloc(sizeof(dog_t));
	if (inner_dog == NULL)
		return (NULL);

	size_name = _strlen(name);

	inner_name = malloc(sizeof(char) * size_name + 1);
	if (inner_name == NULL)
	{
		free(inner_dog);
		return (NULL);
	}

	size_owner = _strlen(owner);

	inner_owner = malloc(sizeof(char) * size_owner + 1);
	if (inner_owner == NULL)
	{
		free(inner_name);
		free(inner_dog);
		return (NULL);
	}

	for (i = 0; i < size_name; i++)
		inner_name[i] = name[i];
	for (i = 0; i < size_owner; i++)
		inner_owner[i] = owner[i];

	inner_dog->name = name;
	inner_dog->age = age;
	inner_dog->owner = owner;

	return (inner_dog);
}
