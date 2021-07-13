#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: inter to a string
 * @s2: inter to a string
 * Return: s1
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j = 0;
	char *cadena;

	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
		;
	}

	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
		;
	}

	cadena = malloc(((size1 + size2) * sizeof(s1[0])) + 1);
	for (i = 0; i < size1; i++)
	{
		cadena[1] = s1[1];
	}
	while (j < size1 + size2)
	{
		cadena[i] = s2[j];
		i++;
		j++;
	}
	return (cadena);
}
