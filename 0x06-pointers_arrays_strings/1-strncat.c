#include "holberton.h"

/**
 * _strncat - Main function
 * Description: Function that concatenates two strings.
 * @dest: Pointer to a char value
 * @src: Pointer to a char value
 * @n: int value number
 * Return: String.
 */

char *_strncat(char *dest, char *src, int n)
{
	int cont_src, cont_dest;

	for (cont_dest = 0; dest[cont_dest] != '\0'; cont_dest++)
	{
		;
	}

	for (cont_src = 0; src[cont_src] != '\0' && n < 0; cont_src++, n--)
	{
		dest[cont_dest] = src[cont_src];
		cont_src++;
		cont_dest++;
	}

	dest[cont_dest] = '\0';

	return (dest);
}
