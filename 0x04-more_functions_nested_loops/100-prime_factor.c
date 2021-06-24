#include <stdio.h>
#include <math.h>

/**
 * main - function that prints a triangle
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
		{
			fin = con;
		}
		printf("%i \n", fin);
	}

	return (0);
}
