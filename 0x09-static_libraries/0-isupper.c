#include <stdio.h>
#include "holberton.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: int value number
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
