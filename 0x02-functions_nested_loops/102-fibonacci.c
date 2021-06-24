#include "holberton.h"
#include "stdio.h"

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	long n1 = 1;
	long n2 = 2;
	long cont;
	long burbuja;

	printf("%li", n1);
	printf(", ");
	printf("%li", n2);
	printf(", ");
	for (cont = 3; cont <= 50; cont++)
	{
		burbuja = n2;
		n2 = n1 + n2;
		printf("%li", n2);
		n1 = burbuja;
		if (cont != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
