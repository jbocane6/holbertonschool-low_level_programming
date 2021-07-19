#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct type dog
*/

void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = nil;
		if (d->owner == NULL)
			d->owner = nil;
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
