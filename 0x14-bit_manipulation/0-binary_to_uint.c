#include "main.h"

/**
 * binary_to_uint - convert to decimal
 * @b: string with binary
 * Return: decimal or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] == '1')
		{
			a = a << 1;
			a = a | 1;
		}
		else if (b[i] == '0')
			a = a << 1;
		else
			return (0);
		i++;
	}
	return (a);
}
