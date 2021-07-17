#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat -  concatenates two strings.
 * @s1: Pointer to first array
 * @s2: Pointer to second array
 * @n: Size of array
 * Return: New string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k;

	if (s1 == NULL || s2 == NULL || n <= 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		return (NULL);

	k = i + n;
	str = malloc((k + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; i < k; i++, j++)
	{
		str[i] = s2[j];
	}

	str[i] = '\0';

	return (str);
}
