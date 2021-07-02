#include "holberton.h"

/**
 * _strcmp - Main function
 * Description: Function that compares two strings.
 * @dest: Pointer to a char value
 * @src: Pointer to a char value
 *
 * Return: String.
 */

int _strcmp(char *s1, char *s2)
{
	int cont = 0;

	while (s1[cont] != '\0' || s2[cont] != '\0')
	{
		if (s1[cont] != s2[cont])
			return (s1[cont] - s2[cont]);
		cont++;
	}
	return (0);
}
