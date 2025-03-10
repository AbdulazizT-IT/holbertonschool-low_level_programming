#include "main.h"

/**
 * _pow_recursion - Computes the value of x raised to the power of y
 * using recursion.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x^y if y >= 0, otherwise -1.
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
