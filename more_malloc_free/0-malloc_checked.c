#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checked.
 * @b: The number of bit.
 *
 * Return: Pointer to ptr.
 */
void *malloc_checked(unsigned int b)
{

	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
