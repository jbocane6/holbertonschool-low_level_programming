#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: size of array
 * @size: type of variable through its size
 * Return: a pointer to the allocated memory, NULL if it fails.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);

	for (k = 0; k < nmemb * size; k++)
		str[k] = '/0';

	return (str);
}
