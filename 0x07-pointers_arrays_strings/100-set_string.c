#include "holberton.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a char
 * @to: string to change
*/

void set_string(char **s, char *to)
{
	*s = to;
}
