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
	int cont2, i, len;
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

		i = 1;
		len = 1;

		while (m / (i * 10) > 0)
		{
			i = i * 10;
			len++;
		}

		for (cont2 = 2; cont2 <= len; cont2++)
		{
			_putchar((m / i) + '0');
			m = m % i;
			i = i / 10;
		}
		_putchar(m + '0');
	}
}
