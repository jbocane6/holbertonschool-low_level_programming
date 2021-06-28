#include "holberton.h"

/**
 * puts2 - main function
 *
 * Description: prints every other character of a string,
 * starting with the first character
 *
 * @str: char type pointer
 *
 */

void puts2(char *str)
{
	int c, d;

	for (c = 0; str[c] != '\0'; c++)
		;

	c--;
	d = 0;

	while (d < c)
	{
		_putchar(str[d]);
		d = d + 2;
	}
	_putchar('\n');
}
