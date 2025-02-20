#include <stdio.h>

/**
 * sum_of_natural_numbers - Calculates the sum of natural numbers
 *                          divisible by 3 or 5 below a given number.
 * @n: The upper limit (not included in the sum).
 *
 * Description: This function iterates through numbers from 1 to n-1,
 * adds those divisible by 3 or 5, and prints the total sum.
 */
int main(void)
{

	int i, total;

	total = 0;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total += i;
		}

	}
	printf("%d\n", total);
	return (0);
}
