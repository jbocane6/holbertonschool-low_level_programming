#include <stdio.h>
/**
 * main - first function to execute when run program
 * prints the numbers of base 16
 * Return: 0
 */
int main(void)
{
int n;
int l;

for (n = '0' ; n <= '9' ; n++)
putchar(n);
for (l = 'a' ; l <= 'f' ; l++)
putchar(l);
putchar('\n');
return (0);
}
