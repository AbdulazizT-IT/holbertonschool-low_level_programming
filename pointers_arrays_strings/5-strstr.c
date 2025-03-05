#include "main.h"

/**
 * _strstr - Locates a substring within a string
 * @haystack: The main string to search within
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	if (needle[0] == '\0')
	return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
				j++;
			}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		}
		i++;
	}
	return ('\0');
}
