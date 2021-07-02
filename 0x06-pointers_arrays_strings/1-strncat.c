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
	int c_src, c_dest;

	for (c_dest = 0; dest[c_dest] != '\0'; c_dest++)
	{
		;
	}

	for (c_src = 0; src[c_src] != '\0' && n > 0; c_src++, n--, c_dest++)
	{
		dest[c_dest] = src[c_src];
	}

	return (dest);
}
