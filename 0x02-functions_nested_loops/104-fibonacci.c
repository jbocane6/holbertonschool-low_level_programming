#include "stdio.h"
#include "float.h"

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	long n1 = 1;
	long n2 = 2;
	long burbuja;
	double d1;
	double d2;
	double burbuja2;
	long con;

	printf("%ld", n1);
	printf(", ");
	printf("%ld", n2);
	printf(", ");
	for (con = 3; con <= 90; con++)
	{
		burbuja = n2;
		n2 = n2 + n1;
		n1 = burbuja;
		printf("%ld", n2);
		printf(", ");
	}
	for (con = 91; con <= 98; con++)
	{
		burbuja2 = (float)n2;
		d2 = (float)n2 + (float)n1;
		d1 = burbuja2;
		printf("%.0f", d2);
		if (con != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
