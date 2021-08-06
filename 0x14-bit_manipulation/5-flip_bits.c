#include "main.h"

/**
 * count_true - Count all true values in a binary.
 * @n: Binary received.
 * @i: Pointer to an integer.
 * Return: Pointer with the amount of true values.
*/

unsigned long count_true(unsigned long int n, unsigned long int *i)
{
	if (n > 1)
		count_true(n >> 1, i);

	if ((n & 1) == 1)
	{
		*i += 1;
	}
	return (*i);
}

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: Number that has to be changed.
 * @m: New Number that has to be.
 * Return: Number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, i = 0, *j = &i;

	if (n == m)
		return (0);

	xor = n ^ m;

	count_true(xor, j);
	return (i);
}
