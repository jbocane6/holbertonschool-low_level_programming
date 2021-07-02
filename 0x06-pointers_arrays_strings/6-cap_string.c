#include "holberton.h"

/**
 * cap_string - Main function
 * Description: capitalizes all words of a string.
 * @str: Pointer to a char value
 * Return: String.
 */

char *cap_string(char *str)
{
	int cont, cont2;
	char cadena[13] = {',', ';', '.', '!', '?',
			   '(', ')', '{', '}', ' ',
			   '\t', '\n', '"'};

	if (str == 0)
		return (0);

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	for (cont = 0; str[cont] != '\0'; cont++)
	{
		for (cont2 = 0; cadena[cont2] != '\0'; cont2++)
		{
			if (str[cont] == cadena[cont2])
			{
				if (str[cont + 1] >= 'a' && str[cont + 1] <= 'z')
				{
					str[cont + 1] -= 32;
				}
			}
		}
	}

	return (str);
}
