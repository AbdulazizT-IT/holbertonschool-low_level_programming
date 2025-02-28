#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @s: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *s)
{
	char *ptr = s;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*s)
	{
		for (i = 0; letters[i]; i++)
		{
			if (*s == letters[i])
			{
				*s = rot13[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
