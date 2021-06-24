#include "holberton.h"

/**
 * imprimir - prints comma, spaces and the number
 * @n: input value number
 */

void imprimir(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');

	}
	else if (n >= 9 && n < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 99 && n < 1000)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
/**
 * print_times_table - main function
 * @n: input value number
 *
 */

void print_times_table(int n)
{
	int base;
	int mult;
	int prod;

	if (n >= 0 && n <= 15)
	{
		for (base = 0; base <= n; base++)
		{
			mult = 1;
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				prod = base * mult;
				imprimir(prod);
				if (mult == n)
					_putchar('\n');
			}
			if (n == 0)
				_putchar('\n');
		}
	}
}
