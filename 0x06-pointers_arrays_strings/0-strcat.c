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

	while (dest[cont_dest] != '\0')
	{
		cont_dest++;
	}

	while (src[cont_src] != '\0')
	{
		dest[cont_dest] = src[cont_src];
		cont_src++;
		cont_dest++;
	}

	dest[cont_dest] = '\0';

	return (dest);
}
