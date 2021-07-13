#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars,  initializes it with a specific char.
 * @size: size of array
 * @c: specific char
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *cadena;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cadena = malloc(size * sizeof(c));
	if (cadena == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cadena[i] = c;

	return (cadena);
}
