#include "main.h"

/**
 * _puts - main function
 *
 * Description: function that prints a string, followed by a new line
 *
 * @str: char type pointer
 *
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		_putchar(str[c]);
	_putchar('\n');
}
