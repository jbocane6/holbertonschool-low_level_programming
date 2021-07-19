#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	int i;
	int size_name = strlen(name), size_owner = strlen(owner);
	char *inner_name, *inner_owner;

	inner_dog = malloc(sizeof(dog_t));

	if (inner_dog == NULL)
		return (NULL);

	inner_name = malloc(sizeof(char) * size_name + 1);
	if (inner_name == NULL)
	{
		free(inner_name);
		free(inner_dog);
		return (NULL);
	}
	inner_owner = malloc(sizeof(char) * size_owner + 1);
	if (inner_owner == NULL)
	{
		free(inner_owner);
		free(inner_name);
		free(inner_dog);
		return (NULL);
	}

	for (i = 0; i < size_name - 1; i++)
		inner_name[i] = name[i];

	for (i = 0; i < size_owner - 1; i++)
		inner_owner[i] = owner[i];

	inner_dog->name = name;
	inner_dog->age = age;
	inner_dog->owner = owner;
	
	return (inner_dog);
}
