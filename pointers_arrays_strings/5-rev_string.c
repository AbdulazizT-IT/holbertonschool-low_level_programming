#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Description: This function reverses the characters of the string
 * passed as a parameter by swapping the characters from the beginning
 * and the end, moving towards the middle.
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0 ; i < length / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
