#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: number of bit
 * Return: Pointer to newly allocated space in memory with concatenated string.
 *         NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *copy;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	copy = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < len1 ; i++)
	{
		copy[i] = s1[i];
	}
	for (j = 0 ; j < n ; j++)
	{
		copy[i + j] = s2[j];
	}

	copy[i + j] = '\0';
	return (copy);
}
