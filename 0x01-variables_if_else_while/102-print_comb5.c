#include <stdio.h>
/**
 * main - first function to execute when run program
 * prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
int m, n;
int a, b, c, d;

for (m = 0; m < 100; m++)
{
a = m / 10;
b = m % 10;
for (n = 0; n < 100; n++)
{
c = n / 10;
d = n % 10;
if (a < c || (a == c && b < d))
{
putchar(a + '0');
putchar(b + '0');
putchar(32);
putchar(c + '0');
putchar(d + '0');
if (!(a == 9 && b == 8))
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}
