#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to array.
 * @old_size: size, in bytes, of the allocated space
 * for ptr.
 * @new_size: new size, in bytes of the new memory block.
 * Return: contents will be copied to a newly allocated
 * space, in the range from the start of ptr up to the
 * minimum of the old and new sizes.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;

	if (new_size < old_size)
		return (NULL);

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		str = malloc(sizeof(ptr) * (new_size));

		if (str == NULL)
			return (NULL);

		return (str);
	}
}
