#include "stdio.h"

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int n1 = 1, n2 = 2, burbuja, con;
	unsigned long int temp1, temp2, temp3, izq1, izq2;

	printf("%lu", n1);
	printf(", ");
	printf("%lu", n2);
	printf(", ");
	for (con = 3; con <= 91; con++)
	{
		burbuja = n2;
		n2 = n2 + n1;
		n1 = burbuja;
		printf("%lu", n2);
		printf(", ");
	}
	for (con = 92; con <= 98; con++)
	{
		temp1 = (n1 + n2) / 10000000000;
		temp2 = (n1 + n2) % 10000000000;
		temp3 = izq1 + izq2 + temp1;
		izq1 = izq2, izq2 = temp3;
		n1 = n2, n2 = temp2;
		printf("%lu%010lu", izq2, n2);
		if (con != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
