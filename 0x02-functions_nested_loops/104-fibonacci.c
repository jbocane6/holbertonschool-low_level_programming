#include "stdio.h"

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	float n1 = 1;
	float n2 = 2;
	float burbuja;
	float con;

	printf("%f", n1);
	printf(", ");
	printf("%f", n2);
	printf(", ");
	for (con = 3; con <= 98; con++)
	{
		burbuja = n2;
		n2 = n2 + n1;
		n1 = burbuja;
		printf("%f", n2);
		if (con != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
