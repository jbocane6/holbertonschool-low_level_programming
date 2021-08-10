#include "holberton.h"

/**
 * main - Entry point that prints the first 98 Fibonacci numbers
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i, res;
	unsigned long int ant = 0, antt = 0;
	unsigned long int new = 0, newt = 0;
	unsigned long int sum = 1, sumt = 0;

	for (i = 0; i < 92; i++)
	{
		new = sum + ant;
		printf("%lu", new);
		ant = sum;
		sum = new;
		printf(", ");
	}
	antt = ant % 1000000000;
	ant = ant / 1000000000;
	sumt = sum % 1000000000;
	sum = sum / 1000000000;
	for (i = 92; i < 98; i++)
	{
		new = sum + ant;
		newt = sumt + antt;
		res = newt / 1000000000;
		if (res != 0)
		{
			new = new + res;
			newt = newt % 1000000000;
		}
		printf("%lu%lu", new, newt);
		ant = sum;
		antt = sumt;
		sum = new;
		sumt = newt;
		if (i < 97)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
