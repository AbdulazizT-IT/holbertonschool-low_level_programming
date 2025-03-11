#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, _strlen(s) - 1));
}

/**
 * check_palindrome - helper function to check palindrome recursively
 * @s: string to check
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
