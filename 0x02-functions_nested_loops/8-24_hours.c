#include "holberton.h"
/**
 * jack_bauer - first function
 * Return: 0
 */
void jack_bauer(void)
{
int min;
int hor;
int bur;
int buja;

for (hor = 0; hor <= 23; hor++)
{
for (min = 0; min <= 59; min++)
{
bur = hor / 10;
buja = hor % 10;
putchar(bur + '0');
putchar(buja + '0');
putchar(':');
bur = min / 10;
buja = min % 10;
putchar(bur + '0');
putchar(buja + '0');
putchar('\n');
}
}
}
