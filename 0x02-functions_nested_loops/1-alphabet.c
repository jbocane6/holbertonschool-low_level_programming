#include <stdio.h>
/**
 * print_alphabet -  prints the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
char n;

for (n = 'a' ; n <= 'z' ; n++)
putchar(n);
putchar('\n');
}
