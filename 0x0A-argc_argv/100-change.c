#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins.
 * @argc: argument count
 * @argv: arguments passed to main as an array of char
 * Return: 0, 1
 */

int main(int argc, char *argv[])
{
	int value, cont = 0, modulo;
	(void)argv;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
		printf("%d\n", 0);
	else
	{
		while (value > 0)
		{
			if (value / 25 != 0)
				modulo = 25;
			else if (value / 10 != 0)
				modulo = 10;
			else if (value / 5 != 0)
				modulo = 5;
			else if (value / 2 != 0)
				modulo = 2;
			else
			{
				cont += value;
				value -= 0;
				break;
			}

			cont += (value / modulo);
			value %= modulo;
		}
		printf("%d\n", cont);
	}
	return (0);
}
