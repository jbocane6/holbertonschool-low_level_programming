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
	int i = 0, j = 0, k, l;

	if (needle[0] == '\0')
		return (haystack);

	for (; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			k = i + 1, l = j + 1;
			while (needle[l] != '\0')
			{
				if (haystack[k] != needle[l])
					break;
				l++;
				k++;
			}
			if (needle[l] == '\0')
				return (&haystack[i]);
		}

	}
	return (NULL);
}
