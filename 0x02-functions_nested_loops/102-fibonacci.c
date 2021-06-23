#include <stdio.h>
/**
 * main - first function
 * Return: 0
 */
int main(void)
{
int n;
long f = 1;
printf("%ld, ", f);
long g = f + 1;
long comodin;
for (n = 1; n <= 49; n++)
{
printf("%ld, ", g);
comodin = g;
g = f + g;
f = comodin;
}
return (0);
}
