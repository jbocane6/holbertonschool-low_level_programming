#include "holberton.h"
/**
 * times_table - first function
 * Return: 0
 */
void times_table(void)
{
int mult;
int base;
int prod;

for (base = 0; base <= 9; base++)
{
for (mult = 0; mult <= 9; mult++)
{
prod = base * mult;
_putchar(prod + '0');
if (mult < 9)
{
_putchar(',');
_putchar(' ');
}
else
_putchar('\n');
}
}
}
