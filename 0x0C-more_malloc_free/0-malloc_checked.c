#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of array
 * Return: a pointer to the allocated memory, 98 if it fails.
*/

void *malloc_checked(unsigned int b)
{
	void *cadena;

	cadena = malloc(b);
    
	if (cadena == NULL)
		exit(98);
	return (cadena);
}
