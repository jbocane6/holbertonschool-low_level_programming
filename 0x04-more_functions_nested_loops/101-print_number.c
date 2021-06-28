#include "holberton.h"
#include "stdio.h"
#include "math.h"

/**
 * print_number -  function that prints an integer
 * @n: int value number
 * Return: 0
 */

void print_number(int n)
{
	if (n == 0)
		_putchar(n + '0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = n * -1;
		}
		int cont2;
		int i = 1;
		int len = 1;

		while (n / (i * 10) > 0)
		{
			i = i * 10;
			len++;
		}

		for (cont2 = 2; cont2 <= len; cont2++)
		{
			_putchar((n / i) + '0');
			n = n % i;
			i = i / 10;
		}
		_putchar(n + '0');
	}
	_putchar('\n');
}
