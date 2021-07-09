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
	int value, cont = 0;
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
		while (value / 25 != 0 && value > 0)
		{
			cont += (value / 25);
			value %= 25;
		}
		while (value / 10 != 0 && value > 0)
		{
			cont += (value / 10);
			value %= 10;
		}
		while (value / 5 != 0 && value > 0)
		{
			cont += (value / 5);
			value %= 5;
		}
		while (value / 2 != 0 && value > 0)
		{
			cont += (value / 2);
			value %= 2;
		}
		while (value > 0)
		{
			cont++;
			value--;
		}
		printf("%d\n", cont);
	}
	return (0);
}
