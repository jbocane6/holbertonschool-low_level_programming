#include <stdio.h>
#include "holberton.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: int value number
 * Return: 0
 */

void print_line(int n)
{
	int con;

	if (n > 0)
	{
		for (con = 0; con < n; con++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
