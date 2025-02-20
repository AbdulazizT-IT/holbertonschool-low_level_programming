#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting from 0.
 * @n: The multiplication table number (must be between 0 and 15).
 *
 * Description: If n is greater than 15 or less than 0, the function
 * does not print anything. Otherwise, it prints the times table up to n.
 */
void print_times_table(int n)
{
	int i, c, k;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n ; i++)
	{

		for (c = 0 ; c <= n ; c++)
		{



			k = i * c;

			if (c == 0)
				printf("%d", k);

			else
				printf(", %3d", k);


		}
	printf("\n");
	}
}
