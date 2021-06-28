#include "holberton.h"

/**
 * print_rev - main function
 *
 * Description: prints a string, in reverse, followed by a new line
 *
 * @s: char type pointer
 *
 */

void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	while (c > 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
