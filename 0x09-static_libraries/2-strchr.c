#include "holberton.h"
#include <string.h>

/**
 * *_strchr - Main function
 * Description: function that locates a character in a string.
 * @s: char pointer value
 * @c: char value
 * Return: pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (NULL);
}
