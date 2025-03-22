#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings separated by a given separator
 * @separator: The string used as a separator between words
 * @n: The number of strings passed to the function
 *
 * Description:
 * - This function uses `va_list` to handle a variable number of arguments.
 * - If `separator` is not NULL, it is printed between the strings.
 * - If any string is NULL, "(nil)" is printed instead.
 * - A new line is printed at the end.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		printf("%s", s);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

