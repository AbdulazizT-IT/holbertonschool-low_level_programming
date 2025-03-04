#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search
 * @accept: The string containing the characters to match
 *
 * Return: Number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, n = 0;
	int found;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}

		if (found == 0)
		{
		break;
		}

		n++;
		i++;
	}

	return (n);
}


