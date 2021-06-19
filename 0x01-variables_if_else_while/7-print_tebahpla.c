#include <stdio.h>
/**
 * main - first function to execute when run program
 * prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
int n;

for (n = 'z' ; n >= 'a' ; n--)
putchar(n);
putchar('\n');
return (0);
}
