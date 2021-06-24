#include <stdio.h>
#include "holberton.h"

/**
 * main - main function
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
