#include "holberton.h"

/**
 * _strncat - Main function
 * Description: Function that copies a string.
 * @dest: Pointer to a char value
 * @src: Pointer to a char value
 * @n: int value number
 * Return: String.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
