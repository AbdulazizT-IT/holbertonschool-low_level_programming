#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Computes the sum of all its parameters.
 * @n: The number of arguments.
 *
 * Return: The sum of all parameters, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x;
	int s = 0;
	va_list args;

	va_start(args, n);


	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(args, int);
		s += x;
	}
	va_end(args);

	return (s);
}
