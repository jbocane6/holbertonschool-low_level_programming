#include "holberton.h"
#include <stdio.h>

/**
 * raiz - returns square root of a number.
 * @n: int value number
 * @x: int value number
 * Return: square root
 */

int raiz(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	x++;
	return (raiz(n, x));
}

/**
 * _sqrt_recursion - returns square root of a number.
 * @n: int value number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int x = 2;

	if (n == 1)
		return (n);
	return (raiz(n, x));
}
