#include "stdio.h"

/**
 * main - main block, solve fizz buzz from numbers 1 to 100
 * Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz.
 * Multiples of both 3 and 5 should print FizzBuzz.
 * Return: 0
 */

int main(void)
{
	int con;

	for (con = 1; con <= 100; con++)
	{
		if (con % 3 == 0 && con % 5 == 0)
			printf("FizzBuzz");
		else if (con % 5 == 0)
			printf("Buzz");
		else if (con % 3 == 0)
			printf("Fizz");
		else
			printf("%i ", con);
		if (con != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
