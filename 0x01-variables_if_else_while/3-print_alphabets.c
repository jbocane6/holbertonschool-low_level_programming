#include <stdio.h>
/**
 * main - first function to execute when run program
 * print alphabet lower case
 * print alphabet upper case
 * Return: 0
 */
int main(void)
{
char n;

for (n = 'a' ; n <= 'z' ; n++)
putchar(n);
for (n = 'A' ; n <= 'Z' ; n++)
putchar(n);
putchar('\n');
return (0);
}
