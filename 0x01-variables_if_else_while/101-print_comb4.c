#include <stdio.h>
/**
 * main - first function to execute when run program
 * prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
int l;
int m;
int n;

for (l = '0'; l <= '9'; l++)
{
for (m = '0'; m <= '9'; m++)
{
for (n = '0'; n <= '9'; n++)
{
if (m > l)
{
if (n > m)
{
putchar(l);
putchar(m);
putchar(n);
if (l < '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
