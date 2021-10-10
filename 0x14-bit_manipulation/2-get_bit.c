#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number that has the value to return
 * @index: Is the index, starting from 0 of the bit to get
 * Return: Value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size = sizeof(unsigned long int) * 8;

	if (index > size)
		return (-1);

	return ((n >> index) & 1);
}
