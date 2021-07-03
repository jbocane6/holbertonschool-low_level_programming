#include "holberton.h"
#include "stdio.h"

/**
 * leet - Main function
 * Description: function that encodes a string into 1337.
 * @str: Pointer to a char value
 * Return: String.
 */

char *leet(char *str)
{
	int cont;

	if (str == 0)
		return (0);

	for (cont = 0; str[cont] != '\0'; cont++)
	{
		if (str[cont] == 'a' || str[cont] == 'A')
			str[cont] = '4';
		else if (str[cont] == 'e' || str[cont] == 'E')
			str[cont] = '3';
		else if (str[cont] == 'o' || str[cont] == 'O')
			str[cont] = '0';
		else if (str[cont] == 't' || str[cont] == 'T')
			str[cont] = '7';
		else if (str[cont] == 'i' || str[cont] == 'I')
			str[cont] = '1';
	}
	return (str);
}
