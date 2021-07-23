#include "variadic_functions.h"

/**
 * print_strings - Prints strings.
 * @separator: pointer to a string
 * that contains the separator.
 * @n: Amount of arguments received.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *value;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(list, char *);

		if (value == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", value);
		}
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
