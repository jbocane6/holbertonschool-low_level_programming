#include "holberton.h"
#include "stdio.h"
#include "math.h"

/**
 * print_number - function that prints an integer
 * @n: int value number
 * Return: 0
 */

void print_number(int n)
{
	unsigned int m = 0;

	if (n == 0)
		_putchar(n + '0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
			m = -n;
		}
		else
		{
			m = n;
		}

		if (m / 10)
			print_number(m / 10);

		_putchar((m % 10) + '0');
	}
}
