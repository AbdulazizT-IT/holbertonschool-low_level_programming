#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap_int(int *a, int *b)
{
	int temp;
	int temp1;

	temp = *a;
	temp1 = *b;
	*a = temp1;
	*b = temp;
}
