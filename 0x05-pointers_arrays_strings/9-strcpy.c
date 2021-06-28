#include "holberton.h"

/**
 * _strcpy - main function pointer
 *
 * Description: copies the string pointed to by src
 * to the buffer pointed to by dest
 *
 * @dest: char type pointer
 * @src: char type pointer
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
		dest[c] = src[c];

	dest[c] = '\0';

	return (dest);
}
