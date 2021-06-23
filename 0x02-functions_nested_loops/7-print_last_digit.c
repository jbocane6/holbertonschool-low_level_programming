#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - first function
 * @n: int type number
 * Return: 0
 */
int print_last_digit(int n)
{
int a;

a = n % 10;
_putchar(a);
return (a + '0');
}
