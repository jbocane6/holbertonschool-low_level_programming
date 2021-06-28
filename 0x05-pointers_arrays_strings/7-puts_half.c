#include "holberton.h"

/**
 * puts_half - main function
 *
 * Description: prints half of a string, followed by a new line
 *
 * @str: char type pointer
 *
 */

void puts_half(char *str)
{
	int c, d;

	for (c = 0; s[c] != '\0'; c++)
		;

	if (c % 2 == 0)
		d = c / 2;
	else
		d = (c + 1) / 2

			while (d < c)
			{
				_putchar(str[d]);
				d++;
			}
	_putchar('\n');
}
