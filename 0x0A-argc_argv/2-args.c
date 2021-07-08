#include "holberton.h"
#include <stdio.h>

/**
 * main - print all arguments it receives.
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int d = 0;

	for (; d < argc; d++)
	{
		printf("%s\n", argv[d]);
	}
	return (0);
}
