#include <stdio.h>


/**
 * main - Computes and prints the sum of all multiples of 3 or 5 below 1024.
 *
 * Return: Always 0 (Success)
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
