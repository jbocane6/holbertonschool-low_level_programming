#include <stdio.h>
/**
 * main - first function to execute when run program
 * print alphabet lower case except q and e
 * Return: 0
 */
int main(void)
{
char n;

for (n = 'a' ; n <= 'z' ; n++)
{
if (n != 'e' || n != 'q')
putchar(n);
}
putchar('\n');
return (0);
}
