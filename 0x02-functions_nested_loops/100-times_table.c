#include "holberton.h"

/**
 * imprimir - prints in screen
 * @prod: int value number
 * @mult: int value number
 * @n: int value number
 */
void imprimir(int prod, int mult, int n)
{
	if ((n * n) <= 99)
	{
		if (prod <= 9 && mult > 0)
			_putchar('  ');
	}
	else
	{
		if (prod <= 9 && mult > 0)
			_putchar(' ');
		_putchar('  ');
		if (prod <= 99)
			_putchar(' ');
	}
	if (prod <= 9)
		_putchar(prod + '0');
	else
	{
		if (prod >= 100)
		{
			_putchar(prod / 100 + '0');
			if ((prod - 100) >= 10)
				_putchar((prod - 100) / 10 + '0');
			else
				_putchar(0 + '0');
			_putchar((prod - 100) % 10 + '0');
		}
		else
		{
			_putchar(prod / 10 + '0');
			_putchar(prod % 10 + '0');
		}
	}
	if (mult < n)
	{
		_putchar(',');
		_putchar(' ');
	}
	else
		_putchar('\n');
}

/**
 * print_times_table - first function
 * @n: int value number
 * Return: 0
 */
void print_times_table(int n)
{
	int mult;
	int base;
	int prod;

	if (n <= 15 || n > 0)
	{
		for (base = 0; base <= n; base++)
		{
			for (mult = 0; mult <= n; mult++)
			{
				prod = base * mult;
				imprimir(prod, mult, n);
			}
		}
	}
}
