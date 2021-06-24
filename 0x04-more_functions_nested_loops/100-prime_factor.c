#include <stdio.h>
#include <math.h>

/**
 * main - function that prints a triangle
 * Return: 0
 */

void main(void)
{
	float limit = 612852475143;
	int raiz = (int)floor(sqrt(limit));
	int con, temp;

	for (con = raiz - 1; con >= 2; con--)
	{
		temp = raiz % con;
		if (temp == 0)
		{
			printf("%i \n", con);
			return;
		}
	}
}
