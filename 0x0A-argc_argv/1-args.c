#include "holberton.h"
#include <stdio.h>

/**
 * main - print the number of arguments passed into it.
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%i\n", argc - 1);

	return (0);
}
