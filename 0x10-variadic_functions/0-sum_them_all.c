#include "variadic_functions.h"

/**
 * sum_them_all - Sum of all its parameters.
 * @n: Amount of params received
 * Return: The sum of all its parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	return (sum);
}
