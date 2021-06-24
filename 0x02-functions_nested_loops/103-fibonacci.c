#include "holberton.h"
#include "stdio.h"

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	int cont;
	long n1 = 0;
	long n2 = 0;
	long suma = 1;
	long burbuja = 0;

	for (cont = 1; cont <= 65; cont++)
	{
		n2 = suma + n1;
		if ((n2 % 2) == 0 && n1 < 4000000)
		{
			burbuja = burbuja + n2;
		}
		n1 = suma;
		suma = n2;
	}
	printf("%ld\n", burbuja);
	return (0);
}
