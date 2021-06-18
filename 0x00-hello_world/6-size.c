#include <stdio.h>
/**
 * main - first function to execute when run program
 *
 * Return: 0
 */
int main(void)
{
char charType;
int intType;
long longType;
long long longLongType;
float floatType;

printf("Size of a char: %zu byte\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a long int: %zu bytes\n", sizeof(longType));
printf("Size of a long long: %zu bytes\n", sizeof(longLongType));
printf("Size of a float: %zu bytes\n", sizeof(floatType));
return (0);
}
