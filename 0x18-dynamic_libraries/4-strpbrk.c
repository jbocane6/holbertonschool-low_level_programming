#include "main.h"h>

/**
 * _strpbrk - Main function
 * Description: function that gets the length of a prefix substring.
 * @s: char pointer value
 * @accept: char pointer value
 * Return: number of bytes in the initial segment of s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
