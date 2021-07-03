#include "holberton.h"

/**
 * leet - Main function
 * Description: function that encodes a string into 1337.
 * @str: Pointer to a char value
 * Return: String.
 */

char *leet(char *str)
{
	int cont, cont2;
	char cadena1[10] = {'a','A','e','E','o','O','t','T','l','L'};
	char cadena2[10] = {'4','4','3','3','0','0','7','7','1','1'};

	if (str == 0)
		return (0);

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
