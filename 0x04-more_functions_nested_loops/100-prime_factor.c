#include <stdio.h>
#include <math.h>

/**
 * main - main function
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */

int main(void)
{
	float limit = 612852475143;
	int raiz = (int)floor(sqrt(limit));
	int con, temp, fin;

	for (con = 2; con <= raiz - 1; con++)
	{
		temp = raiz % con;
		if (temp == 0)
			fin = con;
		printf("%i \n", fin);
	}
	return (0);
}
