#include "holberton.h"
#include <ctype.h>
/**
 * _islower - first function
 * @c: char type letter
 * Return: 0
 */
int _islower(int c)
{
if (islower(c) == 0)
return (0);
else
return (1);
}
