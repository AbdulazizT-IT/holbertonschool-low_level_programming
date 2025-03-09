#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to print in reverse
 *
 * Description: This function prints each character in the string recursively,
 * starting from the last character and moving backwards.
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
