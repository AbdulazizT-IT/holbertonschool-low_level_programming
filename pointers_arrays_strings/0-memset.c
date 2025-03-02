#include "main.h"

/**
 * _memset - fill
 * @s: pointer to the string
 * @b: the hex
 * @n: number of hex
 * Return: the s
 */
char *_memset(char *s, char b, unsigned int n)
{


	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
