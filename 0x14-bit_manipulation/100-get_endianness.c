#include "main.h"
#include <stdint.h>

/**
 * get_endianness - Checks the endianness.
 * Return: value in p[0]
*/

int get_endianness(void)
{
	int16_t i = 1;
	int8_t *p = (int8_t *) &i;

	return (p[0]);
}
