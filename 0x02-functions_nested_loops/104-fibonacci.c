#include "stdio.h"

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int burbuja;
	unsigned long int con;

	printf("%lu", n1);
	printf(", ");
	printf("%lu", n2);
	printf(", ");
	for (con = 3; con <= 98; con++)
	{
		burbuja = n2;
		n2 = n2 + n1;
		n1 = burbuja;
		printf("%lu", n2);
		if (con != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

