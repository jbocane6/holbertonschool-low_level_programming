#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: pointer to a char array
 * @f: pointer to a function that includes a
 * pointer to a char array
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
