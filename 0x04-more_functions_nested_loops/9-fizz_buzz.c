#include <stdio.h>
#include "holberton.h"

/**
 * main - main function
 * Description: program that prints the numbers from 1 to 100,
 * followed by a new line
 * But for multiples of three print Fizz instead of
 * the number and for the multiples of five print Buzz, or numbers
 * which are multiples of both three and five print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int con;

	for (con = 1; con <= 100; con++)
	{
		if ((con % 3 == 0) && (con % 5 == 0))
			printf("FizzBuzz ");
		else if (con % 5 == 0)
			printf("Buzz ");
		else if (con % 3 == 0)
			printf("Fizz ");
		else
			printf("%i ", con);
	}

	printf("\n");

	return (0);
}
