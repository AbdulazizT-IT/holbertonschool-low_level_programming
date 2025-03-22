#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		if (separator == NULL)
		{
			return;
		}
		if (i == 3)
		{
			x = va_arg(args, int);
			printf("%d", x);
		}
		else
		{
			x = va_arg(args, int);
			printf("%d%s", x, separator);
		}
	}
	va_end(args);
	printf ("\n");
}
