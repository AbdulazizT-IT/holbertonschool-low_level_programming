#include "main.h"

/**
 * _strpbrk - searches for the first occurrenc
 * @s: the main string to search in
 * @accept: the string containing the bytes to search for
 *
 * Return: pointer to the first
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
