#include <stdio.h>
#include "holberton.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: int value number
 */

void print_diagonal(int n)
{
	int con;
	int con2;

	if (n > 0)
	{
		for (con = 0; con < n; con++)
		{
			for (con2 = 0; con2 < con; con2++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
	}
	_putchar('\n');
}
