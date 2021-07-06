#include "holberton.h"

/**
 * _memcpy - Main function
 * Description: function that copies memory area.
 * @dest: char pointer value
 * @src: char pointer value
 * @n: unsigned int value number
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
	}
	return (dest);
}
