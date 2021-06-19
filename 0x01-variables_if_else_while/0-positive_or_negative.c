#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - first function to execute when run program
 * print if the number is positive
 * print if the number is zero
 * print if the number is negative
 * Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%i is positive\n", n);
else if (n < 0)
printf("%i is negative\n", n);
else
printf("%i is zero\n", n);
return (0);
}
