#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to calculate length for.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return len;
}

/**
 * string_nconcat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: number of bit
 * Return: Pointer to newly allocated space in memory with concatenated string.
 * NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *copy;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	copy = (char *)malloc((len1 + n + 1) * sizeof(char));

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
