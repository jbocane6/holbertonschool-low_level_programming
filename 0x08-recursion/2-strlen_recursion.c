#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to a string
 * Return: Lenght of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
