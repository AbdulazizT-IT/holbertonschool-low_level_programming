#include "main.h"

/**
 * _strcpy - Copies a string, including the null byte (\0),
 *           from src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (ptr);
}
