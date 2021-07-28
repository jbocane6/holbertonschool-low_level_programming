#include "holberton.h"

/**
 * rot13 - Main function
 * Description: function that encodes a string using rot13.
 * @str: Pointer to a char value
 * Return: String.
 */

char *rot13(char *str)
{
	char *rts;
	int cont, cont2, len = strlen(str);
	
	rts = malloc(sizeof(char) * len);
	if (rts == NULL)
		return;
	
	char cadena1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz !_-,;?"};
	char cadena2[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz !_-,;?"};

	for (cont = 0; str[cont]; cont++)
	{
		for (cont2 = 0; cadena1[cont2]; cont2++)
		{
			if (cadena1[cont2] == str[cont])
			{
				rts[cont] = cadena2[cont2];
				break;
			}
		}
	}
	return (rts);
	free(rts);
}
