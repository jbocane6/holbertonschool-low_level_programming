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
	printf("%i", (suma / 100000));
	printf("%i", (suma / 10000) % 10);
	printf("%i", (suma / 1000) % 10);
	printf("%i", (suma / 100) % 10);
	printf("%i", (suma / 10) % 10);
	printf("%i", suma % 10);
	printf("\n");
	return (0);
}
