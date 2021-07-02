#include "holberton.h"

/**
 * string_toupper - Main function
 * Description: changes all lowercase letters of a string to uppercase.
 * @str: Pointer to a char value
 * Return: String.
 */

char *string_toupper(char *str)
{
	int cont = 0;

	if (str == 0)
		return (0);

	while (str[cont] != '\0')
	{
		if (str[cont] >= 'a' && str[cont] <= 'z')
			str[cont] = str[cont] - 32;
		cont++;
	}

	return (str);
}
