#include "main.h"

/**
 * _strspn - Main function
 * Description: function that gets the length of a prefix substring.
 * @s: char pointer value
 * @accept: char pointer value
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, con = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				con++;
		}
	}
	return (con);
}
