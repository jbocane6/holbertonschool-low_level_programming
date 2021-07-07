#include "holberton.h"
#include <string.h>

/**
 * _strstr - Main function
 * Description: function that locates a substring.
 * @haystack: char pointer value
 * @needle: char pointer value
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k, l;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				for (k = i + 1, l = j + 1; needle[k] != '\0'; k++, l++)
				{
					if (needle[k] != haystack[l] || haystack[l] == '\0')
						return (NULL);

				}
				return (&haystack[j]);
			}
		}
	}
	if (needle == haystack)
		return (haystack);

	return (NULL);
}
