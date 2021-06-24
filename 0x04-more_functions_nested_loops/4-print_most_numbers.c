#include <stdio.h>
#include "holberton.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * Return: 0
 */

void print_most_numbers(void)
{
	int con;

	for (con = 0; con <= 9; con++)
	{
		if (con != 2 && con != 4)
			_putchar(con + '0');
	}
	_putchar('\n');
}
