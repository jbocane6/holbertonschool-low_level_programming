#include <stdio.h>
/**
 * main - first function to execute when run program
 * prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
int m;
int n;

for (m = '0'; m <= '9'; m++)
{
for (n = '0'; n <= '9'; n++)
{
if (n > m)
{
putchar(m);
putchar(n);
if (m < '8')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
