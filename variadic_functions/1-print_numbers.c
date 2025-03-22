#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers separated by a given string.
 * @separator: The string to separate numbers.
 * @n: The number of arguments.
 *
 * Description: Prints numbers followed by a newline.
 * If separator is NULL, it is not printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

	}
	va_end(args);
	printf("\n");
}
