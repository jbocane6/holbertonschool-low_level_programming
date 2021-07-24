#include "variadic_functions.h"

/**
 * print_char - Prints an only char.
 * @list: list that contains value
 * to print
*/
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - Prints integers.
 * @list: list that contains value
 * to print
*/
void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 * print_float - Prints floating values.
 * @list: list that contains value
 * to print
*/
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - Prints strings.
 * @list: list that contains value
 * to print
*/
void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints anything.
 * @format: List of types of arguments
 * passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char *
*/

void print_all(const char * const format, ...)
{
	print_t print_f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	char *separator;
	int i = 0, j;
	va_list list;

	va_start(list, format);

	separator = "";

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (print_f[j].type[0] == format[i])
			{
				printf("%s", separator);
				print_f[j].proto(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
