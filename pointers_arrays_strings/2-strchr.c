#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a char in a string
 * @s: the string
 * @c: the char
 *
 * Return: the s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
