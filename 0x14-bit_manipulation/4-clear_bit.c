#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to a number that has the value to modify
 * @index: Is the index, starting from 0 of the bit to set.
 * Return: If it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(unsigned long int) * 8;
	unsigned long int token = ~(1 << index);

	if (index > size)
		return (-1);
	*n &= token;
	return (1);
}
