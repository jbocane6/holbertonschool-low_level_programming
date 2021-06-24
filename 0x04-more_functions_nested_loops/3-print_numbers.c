#include <stdio.h>
#include "holberton.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 */

void print_numbers(void)
{
	int con;

	for (con = 0; con <= 9; con++)
	{
		_putchar(con + '0');
	}
	_putchar('\n');
}
