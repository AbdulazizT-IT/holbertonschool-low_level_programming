#include "main.h"

/**
 * helper_prime_number - Checks if a number is prime recursively.
 * @n: The number to check.
 * @x: The current divisor.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int helper_prime_number(int n, int x)
{
	if (x * x >  n)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (helper_prime_number(n, x + 1));
}

/**
 * is_prime_number - Determines if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (helper_prime_number(n, 2));
}
