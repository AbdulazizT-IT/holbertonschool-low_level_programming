#include "main.h"
#include <stdio.h>

/**
 * sum_of_natural_numbers - Calculates the sum of natural numbers
 *                          divisible by 3 or 5 below a given number.
 * @n: The upper limit (not included in the sum).
 *
 * Description: This function iterates through numbers from 1 to n-1,
 * adds those divisible by 3 or 5, and prints the total sum.
 */
void sum_of_natural_numbers(int n)
{

	int i, total;

	total = 0;

	for (i = 1 ; i < n ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total += i;
		}

	}
	printf("%d", total);
	printf("\n");
}
