#include "main.h"

/**
 * helper_sqrt - Helper function to find the square root recursively.
 * _sqrt_recursion - return the sqrt
 * @n: The number to find the square root of.
 * @x: The current value being tested as the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have one.
 */
int helper_sqrt(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (helper_sqrt(n, x + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper_sqrt(n, 1));
}
