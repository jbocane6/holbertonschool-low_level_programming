#include <stdio.h>
#include "holberton.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int con, con2;

	if (size > 0)
	{
		for (con = size; con >= 1; con--)
		{
			for (con2 = 1; con2 <= size; con2++)
			{
				if (con2 >= con)
					putchar('#');
				else
					putchar(' ');
			}
			putchar('\n');
		}
	}

	putchar('\n');
}
