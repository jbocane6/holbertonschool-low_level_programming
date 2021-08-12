#include "holberton.h"

/**
 * rot13 - Main function
 * Description: function that encodes a string using rot13.
 * @str: Pointer to a char value
 * Return: String.
 */

char *rot13(char *str)
{
	int i, j;

	char cad1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cad2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; cad1[j] != '\0'; j++)
		{
			if (str[i] == cad1[j])
			{
				str[i] = cad2[j];
				break;
			}
		}
	}

	return (str);
}
