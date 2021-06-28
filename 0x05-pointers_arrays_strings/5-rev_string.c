#include "holberton.h"

/**
 * rev_string - main function
 *
 * Description: function that reverses a string
 *
 * @s: char type pointer
 *
 */

void rev_string(char *s)
{
	int c, d, len;
	char t;

	for (c = 0; s[c] != '\0'; c++)
		;

	len = c / 2;
	c--;
	d = 0;

	while (c >= len)
	{
		op = s[d];
		s[d] = s[c];
		s[c] = op;
		c--;
		d++;
	}
}
