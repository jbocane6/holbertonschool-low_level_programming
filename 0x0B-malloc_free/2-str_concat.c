#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: String one
 * @s2: String two
 * Return: Both strings
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	int l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}

	str = malloc(((i + j) * sizeof(s1[0])) + 1);

	if (str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		str[k] = s1[k];
	}

	while (k < i + j)
	{
		str[k] = s2[l];
		l++;
		k++;
	}

	str[k] = '\0';
	return (str);
	free(str);
}
