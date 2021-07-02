#include "holberton.h"

/**
 * _strcat - Main function
 * Description: Function that concatenates two strings.
 * @dest: Pointer to a char value
 * @src: Pointer to a char value
 *
 * Return: String.
 */

char *_strcat(char *dest, char *src)
{
	int cont_src = 0, cont_dest = 0;
	int i = 0, j = 0;
	int cont = 0;

	while (src[cont_src] != '\0')
	{
		cont_src++;
	}

	while (dest[cont_dest] != '\0')
	{
		cont_dest++;
	}

	i = cont_dest + cont_src + 1;

	dest = (char *) realloc(dest, i);
	dest[cont_dest] = '';
	dest[i - 1] = '\0';

	for (j = cont_dest; j < i - 1; j++)
	{
		dest[j] = src[cont];
		cont++;
	}

	return (dest);
}
