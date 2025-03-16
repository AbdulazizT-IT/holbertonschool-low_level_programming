#include "main.h"
#include <stdlib.h>

/**
 * _calloc - set the values to zero.
 * @nmemb: First int.
 * @size: Second int.
 *
 * Return: Pointer to
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *arr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < (nmemb * size) ; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
