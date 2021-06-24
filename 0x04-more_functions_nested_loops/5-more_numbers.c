#include <stdio.h>
#include "holberton.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int con;
	int con2;

	for (con = 0; con < 10; con++)
	{
		for (con2 = 0; con2 <= 14; con2++)
		{
			if (con2 > 9)
				_putchar((con / 10) + '0');
			_putchar((con % 10) + '0');
		}
	}
	_putchar('\n');
}
