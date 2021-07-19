#include "dog.h"
#include <stdlib.h>

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

	inner_dog = malloc(sizeof(dog_t));

	if (inner_dog == NULL)
		return (NULL);

	inner_dog->name = name;
	inner_dog->age = age;
	inner_dog->owner = owner;
	return (inner_dog);
}
