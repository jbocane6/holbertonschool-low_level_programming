#include "stdio.h"
#include "float.h"
#include "math.h"

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

	printf("%.0f", n1);
	printf(", ");
	printf("%.0f", n2);
	printf(", ");
	for (con = 3; con <= 98; con++)
	{
		burbuja = ceil(n2);
		n2 = ceil(n2) + ceil(n1);
		n1 = ceil(burbuja);
		printf("%.0f", n2);
		if (con != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

