#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - returns x raised to the power of y.
 * @x: pointer to a string
 * @y: pointer to a string
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y < 1)
		return (1);
	return (x * (_pow_recursion(x, (y - 1))));
}
