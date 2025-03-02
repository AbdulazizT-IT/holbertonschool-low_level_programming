#include "main.h"

/**
 * _memcpy - copy
 * @dest: the destination
 * @src: the source
 * @n: number of hex
 * Return: the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
