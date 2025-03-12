#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, anith a specific char.
 * @size: the size of the array to be created.
 * @c: the character to initialize the array with.
 *
 * Return: a pointer to the array, or NULL if size = 0 or malloc fails.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}



	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

