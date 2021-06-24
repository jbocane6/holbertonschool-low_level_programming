#include "holberton.h"
#include "stdio.h"

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	long n1 = 2;
	long n2 = 4;
	long cont;
	long burbuja;

	printf("%li", n1);
	printf(", ");
	printf("%li", n2);
	printf(", ");
	for (cont = 5; cont <= 35; cont++)
	{
		if ((cont % 2 == 0) && n1 + n2 <= 4000000)
		{
			burbuja = n2;
			n2 = n1 + n2;
			printf("%li", n2);
			n1 = burbuja;
			if (n1 + n2 < 4000000)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
	return (0);
}
