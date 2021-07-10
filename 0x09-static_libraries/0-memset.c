#include "holberton.h"

/**
 * _memset - Main function
 * Description: function that fills memory with a constant byte.
 * @s: char pointer value
 * @b: char value
 * @n: unsigned int value number
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
