#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - first function to execute when run program
 * print if the number is greater than 5
 * print if the number is less than 6 and not 0
 * print if the number is zero
 * Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

int r;
r = n % 10;
 
if (r == 0)
printf("Last digit of %i is %i and is 0", n, r)
else
{
if (r > 5)
printf("Last digit of %i is %i and is greater than 5", n, r)
else if (r < 6)
printf("Last digit of %i is %i and is less than 6 and not 0", n, r)
}
return (0);
}
