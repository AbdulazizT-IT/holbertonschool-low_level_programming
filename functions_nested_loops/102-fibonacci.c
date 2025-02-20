#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting from 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, next;
	int count;

	printf("%lu, %lu", a, b);

	for (count = 2; count < 50; count++)
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
	}

	printf("\n");
	return (0);
}
