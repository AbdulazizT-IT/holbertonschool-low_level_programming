#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @s: The string to print
 *
 * Description: Prints each character in the string recursively,
 * then prints a new line when reaching the end.
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
