#include "holberton.h"
#include <stdio.h>
/**
 * print_sign - first function
 * @n: int type number
 * Return: 0
 */
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n < 0)
{
printf("-");
return (-1);
}
else
{
printf("0");
return (0);
}
}
