#include <stdio.h>
#include <math.h>

/**
 * main - main function
 * Description: Find and print the largest prime factor of the number
 * 612852475143 (50829599)
 * Return: 0
 */

int main(void)
{
	long int limit = 612852475143;
	long int raiz = (sqrt(limit));
	long int con, temp, fin;

	for (con = raiz; con > 0; con++)
	{
		temp = limit % con;
		if (temp == 0)
		{
			fin = con;
			printf("%li \n", fin);
			break;
		}
	}
	return (0);
}
