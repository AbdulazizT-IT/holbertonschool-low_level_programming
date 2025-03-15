#include "main.h"
#include <stdlib.h>


/**
 * _strdup - Duplicates a string into a newly allocated memory space.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
 * or if str is NULL.
 */
char *_strdup(char *str)
{

	char *copy;
	unsigned int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	copy = (char *)malloc((len + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i <= len ; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}

