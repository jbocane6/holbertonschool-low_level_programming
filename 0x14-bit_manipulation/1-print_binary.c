#include "main.h"
#include <unistd.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to convert to decimal.
 * Return: decimal or 0
*/

void print_binary(unsigned long int n)
{
	char b;

	if (n > 1)
		print_binary(n >> 1);
	b = (n & 1) + '0';
	write(1, &b, 1);
}
