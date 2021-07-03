#include "holberton.h"
#include <stddef.h>

/**
 * rot13 - Main function
 * Description: function that encodes a string using rot13.
 * @str: Pointer to a char value
 * Return: String.
 */

char *rot13(char *str)
{
	int cont, cont2;
	char cadena1[] = {"ABCDEFGHIJKLMabcdefghijklm"};
	char cadena2[] = {"NOPQRSTUVWXYZnopqrstuvwxyz"};

	if (str == NULL)
		return (NULL);

	for (cont = 0; str[cont] != '\0'; cont++)
	{
		for (cont2 = 0; cadena1[cont2]; cont2++)
		{
			if (cadena1[cont2] == str[cont])
			{
				str[cont] = cadena2[cont2];
			}
		}
	}

	return (str);
}
