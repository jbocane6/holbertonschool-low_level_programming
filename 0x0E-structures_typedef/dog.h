#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  Is the structure definition of a dog
 * @name: character string
 * @age: Floating integer
 * @owner: Array of characters
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
