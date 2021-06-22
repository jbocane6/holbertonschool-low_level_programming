#include "holberton.h"
/**
 * print_alphabet_x10 - first function
 * Return: 0
 */
void print_alphabet_x10(void)
{
char n;

for (int m = 0 ; m <= 10 ; m++)
{
for (n = 'a' ; n <= 'z' ; n++)
_putchar(n);
_putchar('\n');
}
}
