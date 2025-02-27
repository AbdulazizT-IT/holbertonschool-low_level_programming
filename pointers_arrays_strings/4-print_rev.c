#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: the string to be printed.
 *
 * This function iterates through the string from the end to the beginning,
 * printing each character using the _putchar function.
 */
void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	while (end > s)
	{
		end--;
		_putchar(*end);
	}

	_putchar('\n');
}
