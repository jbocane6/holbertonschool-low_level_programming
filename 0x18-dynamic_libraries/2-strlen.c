#include "main.h"

/**
 * _strlen - main function
 *
 * Description: function that returns the length of a string
 *
 * @s: char type pointer
 *
 * Return: c as the length f the string
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
