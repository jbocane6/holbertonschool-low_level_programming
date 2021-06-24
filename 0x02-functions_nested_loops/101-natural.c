#include "holberton.h"

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int suma;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			suma = suma + i;
	}
	printf((suma / 100000));
	printf((suma / 10000) % 10);
	printf((suma / 1000) % 10);
	printf((suma / 100) % 10);
	printf((suma / 10) % 10);
	printf(suma % 10);
	printf('\n');
	return (0);
}
