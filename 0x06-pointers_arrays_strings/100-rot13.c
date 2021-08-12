#include "holberton.h"
#include <string.h>
#include <stdlib.h>
/**
 * rot13 - Main function
 * Description: function that encodes a string using rot13.
 * @str: Pointer to a char value
 * Return: String.
 */

char *rot13(char *str)
{
	char *rts;
	int cont, cont2, len = strlen(str), token;

	rts = malloc(sizeof(char) * len);
	if (rts != NULL)
	{
		char cadena1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		char cadena2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

		for (cont = 0; str[cont]; cont++)
		{
			token = 0;

			for (cont2 = 0; cadena1[cont2]; cont2++)
			{
				if (cadena1[cont2] == str[cont])
				{
					rts[cont] = cadena2[cont2];
					token = 1;
					break;
				}
			}
			if (token == 0)
				rts[cont] = str[cont];
		}
	}
	str = rts;
	free(rts);
	return (str);
}
