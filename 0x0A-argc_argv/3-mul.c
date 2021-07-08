#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments it receives.
 * @argc: argument count
 * @argv: arguments passed to main as an array of int
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mult;
	(void)argv;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mult);
	return (0);
}
