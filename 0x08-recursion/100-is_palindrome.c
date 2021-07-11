#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * emordnilap_si - returns asking palindrome
 * @s: pointer char value
 * @con: int value number
 * Return: palindrome - 1 no - 0
 */

int emordnilap_si(char *s, int con)
{
	if (con <= 1)
		return (1);
	if (s[0] != s[con - 1])
		return (0);
	return (emordnilap_si((s + 1), (con - 2)));
}

/**
 * is_palindrome - calculate if string is a palindrome
 * @s: char pointer string
 * Return: palindrome - 1 no - 0
 */

int is_palindrome(char *s)
{
	int con = strlen(s);

	if (con <= 1)
		return (1);
	return (emordnilap_si(s, con));
}
