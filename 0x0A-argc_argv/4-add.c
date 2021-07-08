#include "holberton.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: argument count
 * @argv: arguments passed to main as an array of char
 * Return: 0, 1
 */

int main(int argc, char *argv[])
{
	int suma = 0, i;
	(void)argv;

	if (argc < 1)
		printf("%d\n", suma);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			suma += atoi(argv[i]);
		}
		printf("%d\n", suma);
	}
	return (0);
}
