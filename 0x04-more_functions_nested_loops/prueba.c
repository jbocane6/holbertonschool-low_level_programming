#include "stdio.h"
#include "math.h"

/**
 * main -  function that prints an integer
 *
 * Return: 0
 */

void main(void)
{
	int n = -9863541;

	if (n == 0)
		putchar(n + '0');
	else
	{
		if (n < 0)
		{
			putchar('-');
			n = n * -1;
		}
		int cont, cont2;
		int i = 1;
		int len = 1;

		while (n / (i * 10) > 0)
		{
			i = i * 10;
			len++;
		}

		for (cont2 = 2; cont2 <= len; cont2++)
		{
			putchar((n / i) + '0');
			n = n % i;
			i = i / 10;
		}
		putchar(n + '0');
	}
	putchar('\n');
}
