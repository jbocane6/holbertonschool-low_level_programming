#include "holberton.h"
#include <stdio.h>

/**
 * prime - returns square root of a number.
 * @n: int value number
 * @x: int value number
 * Return: square root
 */

int prime(int n, int x)
{
	if (x == n)
		return (1);
	if (x > n || n % x == 0)
		return (0);
	x++;
	return (prime(n, x));
}

/**
 * is_prime_number - calculate if integer is a prime number
 * @n: int value number
 * Return: prime - 1 no - 0
 */

int is_prime_number(int n)
{
	int x = 2;
	if (n <= 1)
		return (0);
	return (prime(n, x));
}
