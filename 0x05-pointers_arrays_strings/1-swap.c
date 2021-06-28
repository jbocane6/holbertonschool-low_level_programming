#include "holberton.h"

/**
 * swap_int - main function
 *
 * Description: swaps the values of two integers
 *
 * @a: int type pointer
 * @b: int type pointer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
