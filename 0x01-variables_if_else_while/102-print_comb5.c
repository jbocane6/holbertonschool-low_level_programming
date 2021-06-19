#include <stdio.h>
/**
 * main - first function to execute when run program
 * prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
int k;
int l;
int m;
int n;

for (k = '0'; k <= '9'; k++)
{
for (l = '0'; l <= '9'; l++)
{
for (m = '0'; m <= '9'; m++)
{
for (n = '0'; n <= '9'; n++)
{
while (k >= m && l > n)
{
putchar(k);
putchar(l);
putchar(' ');
putchar(m);
putchar(n);
if (k <= '9')
{
while (l <= 8)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
}
putchar('\n');
return (0);
}
