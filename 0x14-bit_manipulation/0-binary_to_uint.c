#include "main.h"

/**
 * binary_to_uint - convert to decimal
 * @b: string with binary
 * Return: decimal or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int size = strlen(b);
	unsigned int counter, exp, sum = 0, i;

	if (b == NULL || size == 0)
		return (0);

	for (counter = 0; counter < size; counter++)
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);

		exp = 1;
		for (i = 0; i < counter; i++)
		{
			if (counter == 0)
				break;
			exp = 2 * exp;
		}
		sum = sum + (exp * (b[size - 1 -  counter] - '0'));
	}
	return (sum);
}
