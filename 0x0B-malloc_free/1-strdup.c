#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer which contains a copy of the string.
 * @str: inter to a string
 * Return: pointer to the new array, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *cadena;
	int size, i;

	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}

	if (str == 0)
		return (NULL);

	if (str == NULL)
		return (NULL);

	cadena = malloc(size * sizeof(str[0]));

	for (i = 0; i < size; i++)
		cadena[i] = str[i];

	return (cadena);
}
