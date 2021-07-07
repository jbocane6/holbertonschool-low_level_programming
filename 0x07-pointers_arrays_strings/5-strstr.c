#include <string.h>
#include <stdio.h>
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

	for (i; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			k = i + 1, l = j + 1;
			while (needle[j] != '\0')
			{
				if (haystack[k] != needle[l])
					break;
				else
					return (&haystack[i]);
			}
		}

	}
	return (NULL);
}
