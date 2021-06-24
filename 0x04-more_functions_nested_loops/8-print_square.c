#include <stdio.h>
#include "holberton.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: int value number
 * Return: 0;
 */

void print_square(int size)
{
	int con;
	int con2;

	if (n > 0)
	{
		for (con = 0; con < n; con++)
		{
			for (con2 = 0; con2 < n; con2++)
			{
				_putchar('#');
			}
			if (con == n - 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
