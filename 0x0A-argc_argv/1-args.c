#include <stdio.h>

/**
 * main - print the number of arguments passed into it.
 * @argc: argument count
 * @argv: arguments passed to main as an array of strings
 * Return: 0
 */

int main(int argc, int *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
