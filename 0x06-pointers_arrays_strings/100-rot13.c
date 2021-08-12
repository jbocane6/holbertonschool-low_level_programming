#include "holberton.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * rot13 - Main function
 * Description: function that encodes a string using rot13.
 * @str: Pointer to a char value
 * Return: String.
 */

char *rot13(char *str)
{
	char *rts;
	char *cadena1, *cadena1a, *cadena2, *cadena2a;
	int cont, cont2, len = strlen(str);

	rts = malloc(sizeof(char) * len);
	if (rts != NULL)
	{
		*cadena1 = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijk';
		*cadena1a = 'lmnopqrstuvwxyz ()\".!_-,:;?0123456789';
		*cadena2 = 'NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwx';
		*cadena2a = 'yzabcdefghijklm ()\".!_-,:;?0123456789';

		for (cont = 0; str[cont]; cont++)
		{
			for (cont2 = 0; cadena1[cont2]; cont2++)
			{
				if (cadena1[cont2] == str[cont])
				{
					rts[cont] = cadena2[cont2];
					break;
				}
				if (cadena1a[cont2] == str[cont])
				{
					rts[cont] = cadena2a[cont2];
					break;
				}
			}
		}
	}
	str = rts;
	free(rts);
	return (str);
}
