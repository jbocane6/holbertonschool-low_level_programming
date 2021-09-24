#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: String value input
 *
 * Return: An integer found in the string.
 */
int _atoi(char *s)
{
	int signo = 1;
	unsigned int numero = 0;

	do {
		if (*s == '-')
			signo = signo * -1;

		else if (*s > 47 && *s < 58)
			numero = (numero * 10) + (*s - '0');
		else if (numero > 0)
			break;

	} while (*s++);

	return (numero * signo);
}
